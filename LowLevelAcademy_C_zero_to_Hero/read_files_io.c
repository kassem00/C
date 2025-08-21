#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
/*
fun fact std are file discraptor any file discraptor is Number repersent storage
meduiam
*/
typedef struct ST_database_header_t {
  unsigned short version;
  unsigned short employees;
  unsigned int filesize;
} ST_database_header_t;

int main(int argc, char *argv[]) {
  ST_database_header_t head = {0};
  struct stat dbStat = {0};
  int fd;

  if (argc != 2) {
    printf("Usage: %s <filename>\n", argv[0]);
    return 0;
  }
  fd = open(argv[1], O_RDWR | O_CREAT, 0644);
  if (fd == -1) {
    perror("open");
    return -1;
  }

  if (read(fd, &head, sizeof(head)) != sizeof(head)) {
    perror("read");
    return -1;
  }
  printf("DB Version: %u\n", head.version);
  printf("DB Number of employees: %u\n", head.employees);
  printf("DB filesize: %u\n", head.filesize);
  if (fstat(fd, &dbStat) < 0) {
    perror("fstat");
    return -1;
  }
  printf("DB fileLength, reported by stat: %lu", dbStat.st_size);
  close(fd);
  return 0;
}
