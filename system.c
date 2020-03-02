//system.c
#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("Running ps with system \n");
    system("pa -ax | more");
    printf("Done\n");
    return 0;
}