#include <stdio.h>
#include <unistd.h>

int main(void){
  pid_t pid, child_pid;

  printf("Start: PID= %d, parent PID = %d\n", getpid(), getppid());

  pid = fork();
  if(pid < 0){
    perror("fork failed);
    return 1;
  }

  else if(pid > 0){
    child_pid = pid;
    printf("PARENT: PID= %d, child PID= %d\n", getpid(), child_pid);
  }
  else{
    printf("CHILD: PID= %d, parent PID= %d\n", getpid(), getppid());
  }
  return 0;

}
