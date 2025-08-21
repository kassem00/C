#ifndef READ_H
#define READ_H
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#define MAX_EMPLOYEE 1000

/**
 * struct employee_t - Struct for employee
 * @id: Employee ID
 * @firstname: First name
 * @lastname: Last name
 * @income: Monthly income
 * @ismanager: 1 if manager, 0 if not
 */
typedef struct employee_t {
  int id;
  char firstname[30];
  char lastname[20];
  float income;
  bool ismanager;
} ST_employee_t;

/*
fun fact std are file discraptor any file discraptor is Number repersent storage
meduiam
*/
typedef struct ST_database_header_t {
  unsigned short version;
  unsigned short employees;
  unsigned int filesize;
} ST_database_header_t;

#endif // !READ_H
