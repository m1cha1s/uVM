#ifndef U_MMU_H
#define U_MMU_H

#include "uMacros.hpp"

#define MEM_LEN 256

class uMMU
{
private:
    double_word _memory_lenght = MEM_LEN;
    word _memory[MEM_LEN];
public:
    uMMU();
    ~uMMU();

    int loadROM(word *ROM);

    word getWord(double_word address);
    void setWord(double_word address, word value);
};

#endif