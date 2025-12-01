// client
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

int main() {
  printf("client:\n");

  // sokcet
  int socket_fd = socket(AF_UNIX, SOCK_DGRAM, 0);
  if (socket_fd == -1) {
    perror("Socket failed");
    exit(EXIT_FAILURE);
  }

  // create destination address
  struct sockaddr_un addr;
  memset(&addr, 0, sizeof(struct sockaddr_un));
  addr.sun_family = AF_UNIX;
  snprintf(addr.sun_path, 108, "da_udp_socket");

  char *msg = "I'm sending this; hope you get it.\n";
  int bytes_writtten =
      sendto(socket_fd, msg, strlen(msg), 0, (struct sockaddr *)&addr,
             sizeof(struct addr_un *));

  if (bytes_writtten == -1) {
    perror("write failed");
    exit(EXIT_FAILURE);
  }

  close(socket_fd);

  return 0;
}
