#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VRegFile.h"

using namespace std;

VRegFile *top;
VerilatedVcdC *tfp;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;

int rs1 = 0, rs2 = 31;

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    top = new VRegFile;
    tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("./vcd/RegFile.vcd");

    while(!Verilated::gotFinish() && main_time < sim_time)
    {
        // Clock
        if (main_time % 2)
        {
            top->clock = 1;
            rs1 = (rs1 + 1) % 32;
            rs2 = 31 - rs1;
        }
        else
            top->clock = 0;

        top->reset = 0;
        top->io_rs1 = rs1;
        top->io_rs2 = rs2;
        top->io_rd = 6;
        
        if (main_time >= 49 && main_time <= 50)
            top->io_Reg_Write = 1;
        else
            top->io_Reg_Write = 0;

        top->io_wdata = 200;

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