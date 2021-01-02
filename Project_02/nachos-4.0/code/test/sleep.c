#include "syscall.h"
main() {
    int i;
    for(i = 9; i > 5; i--) 
    {
        PrintInt(i);
        Sleep(100000);
    }
    return 0;
}
