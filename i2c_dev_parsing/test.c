#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
  int fd = open("/dev/i2c-1", O_RDWR);
  int buff[255];
  if (fd == -1)
    return -1;
  if (read(fd, buff, sizeof(buff)) < 0)
    return -1;
  printf("%s\n", buff);
  return 0;
}
