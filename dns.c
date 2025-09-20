#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

int main() {
  printf("Performing DNS lookup...\n");

  const char *node = "www.google.com";
  const struct addrinfo hints;
  int getaddrinfo(node,
                 const char *restrict service,
                 const struct addrinfo *restrict hints,
                 struct addrinfo **restrict res);

  return 0;
}
