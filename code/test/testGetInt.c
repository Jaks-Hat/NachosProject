#include "syscall.h"

void print(char c, int n)
{
	int i;
	for (i = 0; i < n; i++) {
	PutChar(c+i);
	}

	/*
	for (i = 0; i < n; i++) {
        PutChar('i');
        PutChar(':');
	    PutInt(i);
        PutChar('\n');
	}
*/

	PutChar('\n');
}
int main()
{
	int n;
    PutString("getchar:\n");
	print(GetChar(), 3);
    
    PutInt(256);
    PutChar('\n');

    GetInt(&n);
    PutInt(n);
    PutChar('\n');
	//print(n);
	//Halt();
    return 0;
}
