#include "uVM.hpp"

uVM::uVM() {

}

int uVM::run() {
    // Loading
    this->_current_op_code = this->_mmu.getWord(this->_pc);

    // Parsing
    word opcode = ((this->_current_op_code&0x0f000000)>>24);
    word opcode_len = ((this->_current_op_code&0xf0000000)>>28) - 1;
    word x = (this->_current_op_code&0x00ffffff);

    // Parameter preloading
    word param_buff[4] = {0,0,0,0};

    for(int i = 0; i < opcode_len; i ++) {
        this->_pc ++;
        param_buff[i] = this->_mmu.getWord(this->_pc);
    }

    // Executing
    switch (opcode)
    {
    case 0x0: // NOP
        break;
    case 0x1: // LDx
        
        break;

    default:
        break;
    }

    return 0;
}