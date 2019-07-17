#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VAdder_Buffer.h"

using namespace std;

VAdder_Buffer *top;
VerilatedVcdC *tfp;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    top = new VAdder_Buffer;
    tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("./vcd/Adder_Buffer.vcd");

    int addr = 10;

    while(!Verilated::gotFinish() && main_time < sim_time)
    {
        // Clock
        if (main_time % 2)
            top->clock = 1;
        else
            top->clock = 0;

        top->reset = 0;
        
        if (main_time >= 0 && main_time <= 5)
            top->io_record = 1;
        else
            top->io_record = 0;

        if (main_time >= 6 && main_time <= 7)
            top->io_flush = 1;
        else top->io_flush = 0;
        
        top->io_addr_input = addr;
        
        if (main_time % 2)
            addr = addr + 10;

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
