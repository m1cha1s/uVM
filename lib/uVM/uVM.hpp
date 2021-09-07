#ifndef U_VM_H
#define U_VM_H

#include "uMacros.hpp"

#include "uMMU.hpp"
#include "uPIA.hpp"

class uVM
{
private:

    // REGISTERS

    double_word _pc = 0; // Program counter
    double_word _mar = 0; // Memory address register

    double_word _sp; // Stack pointer

    word _A; // General purpose register A (Accumulator)
    word _B; // General purpose register B
    word _C; // General purpose register C
    word _D; // General purpose register D

    // INTERFACES

    uMMU _mmu(); // Memory managment unit
    uPIA _pia(); // Peripheral interface adapter

public:
    uVM();
    ~uVM();

    int run();
};

#endif