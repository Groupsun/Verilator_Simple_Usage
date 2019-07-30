#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sys/mman.h>
#include <unistd.h>
#include <fcntl.h>
#include <vector>
#include "VDecoder.h"

using namespace std;

// Signals value
#define WAIT 0
#define DOUT 1
#define DIN  2
#define TERM 3

VDecoder *top;
VerilatedVcdC* tfp;
map<string, CData*> signal_map;
string signal_name;
int in_data;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;

void init_map()
{
    signal_map["S"] = &(top->S);
}

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    top = new VDecoder;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("Decoder.vcd");

    // Init mmap
    int fd = open("out.dat", O_RDWR | O_CREAT, 00777);
    int sigf = open("sig.dat", O_RDWR | O_CREAT, 00777);
    int psize = getpagesize();

    // Avoid bus error
    ftruncate(fd, psize);
    ftruncate(sigf, psize);

    int *p = (int*)mmap(NULL, psize, PROT_WRITE | PROT_READ, MAP_SHARED, fd, 0);
    int *sig = (int*)mmap(NULL, psize, PROT_WRITE | PROT_READ, MAP_SHARED, sigf, 0);

    if (p == MAP_FAILED || sig == MAP_FAILED)
    {
        perror("mmap error");
        exit(1);
    }

    *sig = DIN;

    init_map();

    while(1)
    {
        while (*sig != DIN && *sig != TERM);

        *(signal_map["S"]) = (CData)(*p % 8);
        
        top->eval();
        tfp->dump(main_time);
        main_time++;

        if (*sig == TERM)
            break;

        *sig = WAIT;
    }

    munmap(p, psize);
    close(fd);
    close(sigf);
    remove("out.dat");
    remove("sig.dat");

    tfp->close();
    delete top;
    delete tfp;
    return 0;
}
