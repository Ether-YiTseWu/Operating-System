#include "syscall.h"
main() {
    int i;
    for(i = 20; i <= 25; i++) 
    {
        PrintInt(i);
        Sleep(1000000);
    }
    return 0;
}
