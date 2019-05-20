#include <verilated.h>
#include <verilated_vcd_c.h>
#include <fstream>
#include "VFIR.h"
using namespace std;

VFIR *top;
VerilatedVcdC *tfp;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;
int input_array[sim_time];

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    top = new VFIR;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("FIR.vcd");

    int i;
    fstream input_file;
    input_file.open("input.txt");
    for(i = 0;i < sim_time;i++)
        input_file >> input_array[i];

    while(!Verilated::gotFinish() && main_time < sim_time)
    {
        if(main_time % 2)
            top->clk = 1;
        else
            top->clk = 0;
        
        top->rst = 1;
        top->filter_in = input_array[main_time];
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