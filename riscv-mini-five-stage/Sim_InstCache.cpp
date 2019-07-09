#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VInstCache.h"

using namespace std;

VInstCache* top;
VerilatedVcdC *tfp;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    top = new VInstCache;
    tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("./vcd/InstCache.vcd");

    int addr = 0;

    while(!Verilated::gotFinish() && main_time < sim_time)
    {
        // Clock
        if (main_time % 2)
            top->clock = 1;
        else
        {
            top->clock = 0;
            addr += 4;
        }

        top->io_addr = addr;
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
