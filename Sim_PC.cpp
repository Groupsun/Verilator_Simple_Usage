#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VPC.h"

using namespace std;

VPC* top;
VerilatedVcdC* tfp;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;
int input_index = 0;

int pc[20] = {0, 4, 8, 12, 64, 68, 1024, 1028, 4, 8};

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    top = new VPC;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("PC.vcd");

    while(!Verilated::gotFinish() && main_time < sim_time)
    {
        if(main_time % 2)
        {
            top->clock = 1;
        }
        else
        {
            top->clock = 0;
            input_index++;
        }
        
        top->io_next_pc = pc[input_index];
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
