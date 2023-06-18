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

    
    dut->datain = 0;
    dut->write = 0;
    dut->read = 0;
    dut->wr_clk=0;
    dut->rd_clk=0;

    while (sim_time < MAX_SIM_TIME) {
        
        if (sim_time < 100)
            dut->areset_n = 0;
        else
            dut->areset_n = 1;

        
        if (sim_time == 145) {
            dut->datain = 0x31;
            dut->write = 1;
        }

       
        if (sim_time == 165) {
            dut->write = 0;
        }

        
        if (sim_time == 185) {
            dut->datain = 0x32;
            dut->write = 1;
        }

        
        if (sim_time == 205) {
            dut->write = 0;
        }

        
        if (sim_time == 225) {
            dut->datain = 0x33;
            dut->write = 1;
        }

        
        if (sim_time == 245) {
            dut->write = 0;
        }

        
        if (sim_time == 265) {
            dut->datain = 0x34;
            dut->write = 1;
        }

        
        if (sim_time == 285) {
            dut->write = 0;
        }

       
        if (sim_time == 305) {
            dut->datain = 0x35;
            dut->write = 1;
        }

        
        if (sim_time == 325) {
            dut->write = 0;
        }

        
        if (sim_time == 345) {
            dut->datain = 0x36;
            dut->write = 1;
        }

        
        if (sim_time == 365) {
            dut->write = 0;
        }

        
        if (sim_time == 385) {
            dut->datain = 0x37;
            dut->write = 1;
        }

        
        if (sim_time == 405) {
            dut->write = 0;
        }


 
        if (sim_time == 429) {
            dut->read = 1;
        }

        
        if (sim_time == 453) {
            dut->read = 0;
        }

        
        if (sim_time == 477) {
            dut->read = 1;
        }

        
        if (sim_time == 501) {
            dut->read = 0;
        }

        
        if (sim_time == 525) {
            dut->read = 1;
        }

        
        if (sim_time == 549) {
            dut->read = 0;
        }

        
        if (sim_time == 573) {
            dut->read = 1;
        }

        
        if (sim_time == 597) {
            dut->read = 0;
        }

        
        if (sim_time == 621) {
            dut->read = 1;
        }

        
        if (sim_time == 645) {
            dut->read = 0;
        }

        
        if (sim_time == 669) {
            dut->read = 1;
        }

        
        if (sim_time == 693) {
            dut->read = 0;
        }

        if (sim_time == 717) {
            dut->read =1;
        }
        
        if (sim_time % 10 == 0)
            dut->wr_clk ^= 1;
        if (sim_time % 12 == 0)
            dut->rd_clk ^= 1;

        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
