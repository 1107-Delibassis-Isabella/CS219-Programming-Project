#include "opcode.h"

//returns the result
uint32_t opcode::ADD(uint32_t operand1, uint32_t operand2) {
    uint32_t total;
    total = operand1 + operand2;
    return total;
}

uint32_t opcode::SUB(uint32_t operand1, uint32_t operand2) {
    uint32_t total;
    total = operand1 - operand2;
    return total;
}

uint32_t opcode::AND(uint32_t operand1, uint32_t operand2) {
    uint32_t resultAnd = operand1 & operand2;
    return resultAnd;

}

uint32_t opcode::OR(uint32_t operand1, uint32_t operand2) {
    uint32_t resultOr = operand1 | operand2;
    return resultOr;
}
uint32_t opcode::XOR(uint32_t operand1, uint32_t operand2) {
    uint32_t resultXOR = operand1 ^ operand2;
    return resultXOR;
}

//changes value
uint32_t opcode::NOT(uint32_t operand) {
    uint32_t notOperand = ~operand;
    return notOperand;
}

uint32_t opcode::LSL(uint32_t number, uint32_t numPositions) {
    uint32_t resultLSL = number << numPositions;
    return resultLSL;
}
uint32_t opcode::LSR(uint32_t number, uint32_t numPositions) {
    uint32_t resultLSR = number >> numPositions;
    cout << "numPositions " << numPositions << endl;
    return resultLSR;
}

//checks if true or false
bool opcode::EQ(uint32_t operand1, uint32_t operand2) {
    if (operand1 == operand2) {
        return true;
    }
    return false;
}

bool opcode::LT(uint32_t operand1, uint32_t operand2) {
    if (operand1 < operand2) {
        return true;
    }
    return false;
}
bool opcode::GT(uint32_t operand1, uint32_t operand2) {
    if (operand1 > operand2) {
        return true;
    }
    return false;
}