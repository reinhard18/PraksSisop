//zombie.c
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int arg,char *argsv[]){
   pid_t pid;
  
   pid = fork();
   if(pid > 0){
      sleep(60);
   }else{
    exit(0);
   }
    return 0;
}