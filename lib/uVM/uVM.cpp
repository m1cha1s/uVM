#include "uVM.hpp"

uVM::uVM(unsigned long *mem, unsigned long long depth) {
    uVM::_mem = mem;
    uVM::_sp = depth - 1;
}

int uVM::run() {
    
}