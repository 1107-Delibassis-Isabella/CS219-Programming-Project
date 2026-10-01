#include <iostream>
#include <sstream>
#include <fstream>
#include <stdint.h>
#include "opcode.h"




int main() {
    string op1, op2;
    string operationCode;

    int count = 0;
    opcode* i;



    

    ifstream openFile("input.txt");
    if (!openFile.is_open()) {
        cout << "Could not open the file" << endl; 
    } else {
        string line;
         while (getline(openFile, line)) {
            int opCount = 0;
            stringstream ss(line);
            //Am I supposed to use the line below?
            //ss(line);

            if (ss >> operationCode >> op1 >> op2 ) {

                //cout << "OP1" << operationCode << endl;       TESTING
                uint32_t num1 = stoul(op1, nullptr, 16);
                uint32_t num2 = stoul(op2, nullptr, 16);
                if (operationCode == "ADD") {
                    uint32_t total = i->ADD(num1, num2);
                    cout << ss.str() << " : " << "0x" << std::hex << total << endl;
                    count++;
                } else if (operationCode == "SUB") {
                    uint32_t total = i->SUB(num1, num2);
                    cout << ss.str() << " : " << "0x" << std::hex << total << endl;
                    count++;
                } else if (operationCode == "AND") {
                    uint32_t total = i->AND(num1, num2);
                    cout << ss.str() << " : " << "0x" << std::hex << total << endl;
                    count++;
                } else if (operationCode == "OR") {
                    uint32_t total = i->OR(num1, num2);
                    cout << ss.str() << " : " << "0x" << std::hex << total << endl;
                    count++;
                } else if (operationCode == "XOR") {
                    uint32_t total = i->XOR(num1, num2);
                    cout << ss.str() << " : " << "0x" << std::hex << total << endl;
                    count++;
                } else if (operationCode == "EQ") {
                    bool answer = i->EQ(num1, num2);
                    string trueFalse;
                    if (answer == true) {
                        trueFalse = "True";
                    } else if (answer == false) {
                        trueFalse = "False";
                    }
                    cout << ss.str() << " : " << trueFalse << endl;
                    count++;
                } else if (operationCode == "LT") {
                    bool answer = i->LT(num1, num2);
                    string trueFalse;
                    if (answer == true) {
                        trueFalse = "True";
                    } else if (answer == false) {
                        trueFalse = "False";
                    }
                    cout << ss.str() << " : " << trueFalse << endl;
                    count++;
                } else if (operationCode == "GT") {
                    bool answer = i->GT(num1, num2);
                    string trueFalse;
                    if (answer == true) {
                        trueFalse = "True";
                    } else if (answer == false) {
                        trueFalse = "False";
                    }
                    cout << ss.str() << " : " << trueFalse << endl;
                    count++;
                } else if (operationCode == "LSL") {

                    //How do you check if the shift value exceeds bit size?
                    //How do you check if there is a negative number of shift count?
                    //What does it mean by number of operands does not match the operation? (nvm got it, but would like to check if how I got it is correct)
                    int32_t newNum2 = static_cast<int32_t>(num2);
                    if (newNum2 < 0) {
                        
                        cout << ss.str() << " : " << "Negative shift count" << endl;
                    } else if (newNum2 > 32) {
                        cout << ss.str() << " : " << "Shift Value Exceeds Bit Size" << endl;
                    } else {
                        uint32_t result = i->LSL(num1, num2);
                        cout << ss.str() << " : 0x" << std::hex << result << endl;
                    }
                } else if (operationCode == "LSR") {
                    int32_t newNum2 = static_cast<int32_t>(num2);
                    if (newNum2 < 0) {
                        
                        cout << ss.str() << " : " << "Negative shift count" << endl;
                    } else if (newNum2 > 32) {
                        cout << ss.str() << " : " << "Shift Value Exceeds Bit Size" << endl;
                    } else {
                        uint32_t result = i->LSR(num1, num2);
                        cout << ss.str() << " : 0x" << std::hex << result << endl;
                    }
                } else if (operationCode != "ADD" && operationCode != "SUB" && operationCode != "AND" && operationCode != "OR" && operationCode != "XOR" && operationCode != "NOT" && operationCode != "LSL" && operationCode != "LSR" && operationCode != "EQ" && operationCode != "LT" && operationCode != "GT") {
                    cout << ss.str() << " : " << "Unsupported Operation" << endl;
                }
                    
            
            } else {
                //cout << "else if" << endl; TESTING
                uint32_t num1 = stoul(op1, nullptr, 16);
                if (operationCode == "NOT") {
                    uint32_t total = i->NOT(num1);
                    cout << ss.str() << "0x" << std::hex << total << endl;
                } else {
                    cout << ss.str() << " : " << "Invalid Operand Count" << endl;
                }
            }
         }

    }




    openFile.close();
    return 0;
}