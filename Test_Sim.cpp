#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VTest.h"

using namespace std;

VTest *top;
VerilatedVcdC *tfp;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    top = new VTest;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("Test.vcd");

    while(!Verilated::gotFinish() && main_time < sim_time)
    {
        top->io_a = 10;
        top->io_b = 1;
        top->io_ctl = main_time;

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