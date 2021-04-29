#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
<<<<<<< HEAD

void childTask(){
printf("Salam ,saya anak tau\n");
}
void parentTask(){
printf("Dan saya adalah bapaknya  n ");
}
int main (void){
pid_t pid = fork();
if (pid==0){
childTask(0;
exit (EXIT_SUCCESS);
}
else if (pid >0 ) {
wait(NULL);
parentTask();
}
else{
printf ("Unable to create child process ");
}
return EXIT_SUCCESS;
}

=======
 
void childTask() {
  printf("Salam, saya anak tau\n");
}
 
void parentTask() {
  printf("Dan saya adalah bapaknya n");
}
 
int main(void) {
  pid_t pid = fork();
 
  if(pid == 0) {
    childTask();
    exit(EXIT_SUCCESS);
  }
  else if(pid > 0) {
    wait(NULL);
    parentTask();
  }
  else {
    printf("Unable to create child process.");
  }
 
  return EXIT_SUCCESS;
}
>>>>>>> 7fea5920fd92570e8cf640ab347a2acca5e4546d

