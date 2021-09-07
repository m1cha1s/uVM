#include "uMMU.hpp"

uMMU::uMMU() {
    for(int i = 0; i < sizeof(uMMU::_memory)/sizeof(word); i ++) {
        uMMU::_memory[i] = 0x10000000; // Fill memory with NOPs
    }
}

int uMMU::loadROM(word *ROM) {
    double_word _size_of_rom = sizeof(ROM)/sizeof(word);
    if (_size_of_rom <= uMMU::_memory_lenght) {
        for(int i = 0; i < _size_of_rom; i ++) 
            uMMU::_memory[i] = ROM[i];
        return 0;
    } else
        return 1;
}

word uMMU::getWord(double_word address) {
    return uMMU::_memory[address];
}

void uMMU::setWord(double_word address, word value) {
    uMMU::_memory[address] = value;
}