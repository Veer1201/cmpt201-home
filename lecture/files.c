#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
  // int file = open("tmp", O_CREAT | O_RDWR, S_IUSR | S_IWUSR);
  // write(file, "Hello World!", sizeof("Hello World"));
  // close(file);
  //
  int file = open("tmp1", O_CREAT | O_RDWR);
  write(file, "I am learning files", sizeof("I am learning files"));

  while (1) {
    sleep(30);
  }
}
