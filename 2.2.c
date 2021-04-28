
#include <stdlib.h>    /*needed to define exit()*/
#include <unistd.h>    /*needed  for fork() and getpid()*/
#include <stdio.h>     /*needed for  printf() */

int main(int argc,char ** argv){
             int pid;   /*processID*/

switch (pid =fork()){
case 0:
printf("Iam the child process: pid =%d\n",getpid());
break;
default: 
printf("Iam the parent process : pid=%d,child pid =%d\n",getpid(),pid);
break;
case-1:
perror("fork");
exit(1);
}
exit(0);
}
