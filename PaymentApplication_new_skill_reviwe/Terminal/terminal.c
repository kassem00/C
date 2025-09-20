#include "terminal.h"

EN_terminalError_t getTransactionDate(ST_terminalData_t *termData) {
  printf("Enter Transaction Date (DD/MM/YYYY): ");
  scanf("%10s", termData->transactionDate);
  if (strlen(termData->transactionDate) != 10 ||
      termData->transactionDate[2] != '/' ||
      termData->transactionDate[5] != '/') {
    return WRONG_DATE;
  }

  // Parse date
  char copy[11];
  strcpy(copy, termData->transactionDate); // strtok modifies string
  char *token;
  int dd, mm, yyyy;

  token = strtok(copy, "/");
  dd = atoi(token);

  token = strtok(NULL, "/");
  mm = atoi(token);

  token = strtok(NULL, "/");
  yyyy = atoi(token);

  // Basic range checks
  if (dd <= 0 || mm <= 0 || yyyy <= 0 || mm > 12 || dd > 31)
    return WRONG_DATE;

  // February handling
  int leap = (yyyy % 400 == 0) || (yyyy % 4 == 0 && yyyy % 100 != 0);

  if (mm == 2) {
    if ((leap && dd > 29) || (!leap && dd > 28))
      return WRONG_DATE;
  }

  // Months with 30 days
  if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
    if (dd > 30)
      return WRONG_DATE;
  }

  // Months with 31 days already covered by dd > 31 check

  return TERMINAL_OK;
}
