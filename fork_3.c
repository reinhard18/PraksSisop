//fork_3.c
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int arg,char *argsv[]){
   int pid;
   printf("main Process ID (PID) = %d Parent Process ID (PPID) = %d\n", getpid(),getpid());
   pid = fork();
   if(pid == 0){
       printf("This is child process\n");
       printf("PID = %d\n",pid);
       printf("Child's PID %d parent PId %d\n",getpid(),getppid());
   }else{
       printf("This is the parent process\n");
       printf("PID = %d\n",pid);
       printf("Parent's PID %d parent PID %d\n",getpid(),getppid());
       
   }
    return 0;
}