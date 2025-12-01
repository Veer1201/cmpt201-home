#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <wait.h>

int main() {
  pid_t pid = fork();

  if (pid < 0) {
    perror("Fork Failure");
    exit(EXIT_FAILURE);
  }

  else if (pid == 0) {
    execl("/bin/ls", "ls", "-a", "-l", (char *)NULL);
    perror("execl failed");
    exit(EXIT_FAILURE);
  }

  else {
    int status;
    waitpid(pid, &status, 0);

    if (WIFEXITED(status)) {
      printf("Child exited with status %d\n", WEXITSTATUS(status));
    } else {
      printf("Child did not exited normally");
    }

    return 0;
  }
}
