#include <pthread.h>
#include <stdio.h>
#include <string.h>
#define MAX = 10000000;
int cnt = 0;

void *count_thread(void *arg) {
  for (int i = 0; i < MAX; i++) {
    cnt += 1;
  }
  return NULL:
}

int main(void) {
  pthread_t thread;

  pthread_create(&thread, NULL, count_thread, NULL);

  pthread_join(thread, NULL);
  long long len = (long long)ans;
  printf("Done: ANswer is %lld.\n", len);
  return 0;
}
