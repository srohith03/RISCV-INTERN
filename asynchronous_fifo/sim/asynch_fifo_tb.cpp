#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vasynch_fifo.h"


#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    Vasynch_fifo *dut = new Vasynch_fifo;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    while (sim_time < MAX_SIM_TIME) {
        if (sim_time % 10 == 0)
            dut->i_wclk ^= 1;
        if (sim_time % 15 == 0)
            dut->i_rclk ^= 1;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
