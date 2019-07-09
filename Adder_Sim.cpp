#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include "VAdder.h"

using namespace std;

VAdder* top;
VerilatedVcdC* tfp;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    top = new VAdder;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("Adder.vcd");

    while(!Verilated::gotFinish() && main_time < sim_time)
    {
        top->reset = 0;
        if (main_time >= 5 && main_time <= 6)
            top->io_a = 0;
        else if(main_time >= 9 && main_time <= 10)
            top->io_a = 2;
        else
            top->io_a = 0;

        top->eval();
        tfp->dump(main_time);
        main_time++;
    }

    tfp->close();
    delete top;
    delete tfp;
    exit(0);
    return 0;
}