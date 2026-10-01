#ifndef OPCODE_H
#define OPCODE_H
#include <iostream> 
#include <sstream> 
#include <stdint.h>
using namespace std;

class opcode {
    uint32_t op1, op2;

    public: 


        //returns the result
        uint32_t ADD(uint32_t, uint32_t);
        uint32_t SUB(uint32_t, uint32_t);
        uint32_t AND(uint32_t, uint32_t);
        uint32_t OR(uint32_t, uint32_t);
        uint32_t XOR(uint32_t, uint32_t);

        //changes value
        uint32_t NOT(uint32_t);
        uint32_t LSL(uint32_t, uint32_t);
        uint32_t LSR(uint32_t, uint32_t);

        //checks if true or false
        bool EQ(uint32_t, uint32_t);
        bool LT(uint32_t, uint32_t);
        bool GT(uint32_t, uint32_t);

};
#endif
