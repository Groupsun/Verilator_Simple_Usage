#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sys/mman.h>
#include <unistd.h>
#include <fcntl.h>
#include <vector>
#include "VALU.h"

using namespace std;

// Signals value
#define WAIT 0
#define DOUT 1
#define DIN  2
#define TERM 3
#define STEP 4

VALU *top;
VerilatedVcdC *tfp;
vector<CData*> signals;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;

void input_value(uint64_t *in)
{
    if (in[1] == 0)
        top->io_ALUOp = in[0];
    else if (in[1] == 1)
        top->io_Src_A = in[0];
    else if (in[1] == 2)
        top->io_Src_B = in[0];
}

void output_value(uint64_t *out)
{
    uint64_t write_data = 0;
    if (out[1] == 3)
        write_data = top->io_Sum;
    else if (out[1] == 4)
        write_data = top->io_Conflag;
    out[0] = write_data;
    // cout << out[1] << " " << write_data << endl;
}

void step()
{
    top->clock = 0;
    top->eval();
    tfp->dump(main_time);
    main_time++;
    top->clock = 1;
    top->eval();
    tfp->dump(main_time);
    main_time++;
}

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    top = new VALU;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("ALU.vcd");

    cout << "sizeof(uint8_t) = " << sizeof(uint8_t) << endl;
    cout << "sizeof(uint16_t) = " << sizeof(uint16_t) << endl;
    cout << "sizeof(uint32_t) = " << sizeof(uint32_t) << endl;
    cout << "sizeof(uint64_t) = " << sizeof(uint64_t) << endl;

    // Init mmap
    int fd = open("in.dat", O_RDWR | O_CREAT, 00777);
    int sigf = open("sig.dat", O_RDWR | O_CREAT, 00777);
    int outf = open("out.dat", O_RDWR | O_CREAT, 00777);
    int psize = getpagesize();

    ftruncate(fd, psize);
    ftruncate(sigf, psize);
    ftruncate(outf, psize);

    uint64_t *in = (uint64_t*)mmap(NULL, psize, PROT_WRITE | PROT_READ, MAP_SHARED, fd, 0);
    uint64_t *sig = (uint64_t*)mmap(NULL, psize, PROT_WRITE | PROT_READ, MAP_SHARED, sigf, 0);
    uint64_t *out = (uint64_t*)mmap(NULL, psize, PROT_WRITE | PROT_READ, MAP_SHARED, outf, 0);

    if (in == MAP_FAILED || sig == MAP_FAILED || out == MAP_FAILED) 
    {
        perror("mmap error");
        exit(1);
    }

    *sig = DIN;
    int signal_number = 0;

    while(1)
    {
        while (*sig == WAIT);

        // cout << *sig << endl;

        if (*sig == TERM)
            break;

        switch (*sig)
        {
            case DIN: input_value(in); break;
            case DOUT: output_value(out); break;
            case STEP: step(); break;
            default:
                break;
        }

        *sig = WAIT;
    }

    munmap(in, psize);
    munmap(sig, psize);
    munmap(out, psize);
    close(fd);
    close(sigf);
    close(outf);
    remove("in.dat");
    remove("sig.dat");
    remove("out.dat");

    tfp->close();
    delete top;
    delete tfp;
    return 0;
}
