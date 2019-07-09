#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VPC.h"

using namespace std;

VPC *top;
VerilatedVcdC *tfp;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;

int pc_in[32] = {0, 4, 8, 12, 64, 68, 72, 76, 32, 36, 40};
int input_index = -1;

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    top = new VPC;
    tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("./vcd/PC.vcd");

    while(!Verilated::gotFinish() && main_time < sim_time)
    {
        // Clock
        if (main_time % 2)
            top->clock = 1;
        else
        {
            top->clock = 0;
            input_index++;
        }

        // Test stalling
        if (main_time >= 4 && main_time <= 5)
            top->io_pc_write = 0;
        else
            top->io_pc_write = 1;

        top->io_next_pc = pc_in[input_index];
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