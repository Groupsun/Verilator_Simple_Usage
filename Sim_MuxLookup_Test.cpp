#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VMuxLookup_Test.h"

using namespace std;

VMuxLookup_Test *top;
VerilatedVcdC *tfp;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    top = new VMuxLookup_Test;
    tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("./MuxLookup_Test.vcd");

    while(!Verilated::gotFinish() && main_time < sim_time)
    {
        // Clock
        if (main_time % 2)
            top->clock = 1;
        else
            top->clock = 0;

        top->io_pc_recover = 1000;
        top->io_new_addr = 2000;

        // PC_Sel test
        if (main_time >= 5 && main_time <= 6)
            top->io_PC_Sel = 0;
        else if(main_time >= 9 && main_time <= 10)
            top->io_PC_Sel = 2;
        else
            top->io_PC_Sel = 0;

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