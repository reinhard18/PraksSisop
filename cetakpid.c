// cetakpid.c
#include <unistd.h>
#include <stdio.h>

int main(){
    printf("The process ID %d\n",(int) getpid());
    printf("ID parent process Id id %d\n", (int) getpid());
    return 0;
}