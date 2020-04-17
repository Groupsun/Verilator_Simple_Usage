#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VDecoder.h"
using namespace std;

VDecoder* top;
VerilatedVcdC* tfp;

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    top = new VDecoder;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("Decoder.vcd");

    int count = 0;

    while(!Verilated::gotFinish() && main_time < sim_time)
    {
        top->reset = 0;
        top->S = count;
        count++;
        // cout << top->out << endl;
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