#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
void *my_func(void *arg) {
  printf("Inside a thread!\n");
  return NULL;
}

int main(void) {
  pthread_t thread;
  pthread_create(&thread, NULL, my_func, NULL);

  printf("Done\n");
}
