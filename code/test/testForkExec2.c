#include "syscall.h"
int main(){
    PutString("Test:");
    
    ForkExec("./testPutChar");
    ForkExec("./test2threadsString");
    return 0;
}
