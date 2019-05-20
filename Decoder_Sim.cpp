#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include <fstream>
#include "VDecoder.h"
using namespace std;

VDecoder* top;
VerilatedVcdC* tfp;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;
int input_array[sim_time];

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    top = new VDecoder;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("Decoder.vcd");

    int i;
    fstream input_file;
    input_file.open("input.txt");
    for(i = 0;i < sim_time;i++)
        input_file >> input_array[i];

    while(!Verilated::gotFinish() && main_time < sim_time)
    {
        top->reset = 0;
        cout << input_array[main_time];
        if(main_time > 1)
            top->S = input_array[main_time];
        else
            top->S = 0;
        // cout << top->out << endl;
        top->eval();
        tfp->dump(main_time);
        main_time++;
    }

    input_file.close();
    tfp->close();
    delete top;
    delete tfp;
    exit(0);
    return 0;
}