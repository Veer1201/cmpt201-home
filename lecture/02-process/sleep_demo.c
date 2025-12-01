#define _POSIX_SOURCE 200809L
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

int main() {
  fork();
  for (int i = 0; i < 20; i++) {
    sleep(3);
    printf("Sleeping...\n");
  }
  printf("DONE\n");
}
