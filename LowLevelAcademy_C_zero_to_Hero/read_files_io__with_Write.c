
#include "read_files_io__with_write.h"

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
/**
 * * writeUseirTofile - write use
 */
int writeUserTofile(ST_database_header_t *user, int fd) {
  if (lseek(fd, 0, SEEK_END) == -1) {
    perror("lseek");
    return -1;
  }

  ssize_t written = write(fd, user, sizeof(ST_employee_t));
  if (written != sizeof(ST_employee_t)) {
    perror("write");
    return -1;
  }

  return 0;
}

/**
 * empl_init - initlize the database
 * @employee_db: pointer to db
 * Return: (-1); in error else the db pointer
 *
 */
ST_employee_t *empl_init(void) {
  ST_employee_t *employee_db;
  employee_db = calloc(MAX_EMPLOYEE, sizeof(ST_employee_t));
  if (employee_db == NULL)
    return (NULL);
  return (employee_db);
}

int main(void) {
  ST_employee_t *db;

  db = empl_init();
  if (db == NULL) {
    printf("Memory allocation failed\n");
    return (1);
  }

  /* Fill the first employee using pointer arithmetic */
  strcpy((db + 0)->firstname, "kassem");
  strcpy((db + 0)->lastname, "saber");
  (db + 0)->id = 0;
  (db + 0)->income = 5000.0;
  (db + 0)->ismanager = 1;

  /* Print to verify */
  printf("Employee: %s %s, ID: %d, Income: %.2f, Manager: %s\n",
         (db + 0)->firstname, (db + 0)->lastname, (db + 0)->id,
         (db + 0)->income, ((db + 0)->ismanager ? "Yes" : "No"));

  free(db);
  return (0);
}
