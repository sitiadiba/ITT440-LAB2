#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int i;
char name [10];

void  inputName(){
printf ("Child process no. %d\nPID=%d\nEnter a process name:",i,getpid());
scanf("%s",name);
}

void outputName(){
printf("\nChild process %d: %s\n",i,name);
}

int main (void){

for(i=1;i<4;i++){
pid_t pid =fork();

if(pid==0){
inputName();
outputName();
exit(0);
}

else{
printf("\nProcessing....\n");
wait(NULL);
}
}
printf("\n Thank you for your assistance\n");
return EXIT_SUCCESS;
}


