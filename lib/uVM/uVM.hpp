#ifndef U_VM_H
#define U_VM_H

#include "uPIA.hpp"

class uVM
{
private:

    // REGISTERS

    unsigned long long _mar = 0; // Memory address register

    unsigned long long _sp; // Stack pointer

    unsigned long long _A; // General purpose register A (Accumulator)
    unsigned long long _B; // General purpose register B
    unsigned long long _C; // General purpose register C
    unsigned long long _D; // General purpose register D

    // INTERFACES

    uPIA _pia;

    // MEMORIES

    unsigned long *_mem; // Memory


public:
    uVM(unsigned long *mem, unsigned long long depth);
    ~uVM();

    int run();
};

#endif