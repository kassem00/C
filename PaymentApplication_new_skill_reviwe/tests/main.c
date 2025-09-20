#define RESET "\x1b[0m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#include "../Card/card.h"
#include "../Terminal/terminal.h"
#include <stdbool.h>
#include <stdio.h>

void printf_color(const char *string, const char *color, bool flag) {
  if (color == NULL) {
    color = RESET; // default if no color
  }

  if (flag) {
    printf("%s%s%s / ! \\\n", color, string, RESET);
  } else {
    printf("%s%s%s\n", color, string, RESET);
  }
}

void getCardHolderNameTest(void) {
  ST_cardData_t data;
  int x = getCardHolderName(&data);
  if (x == WRONG_NAME) {
    printf_color("ERROR WORNG NAME", YELLOW, true);
  }
  if (x == CARD_OK)
    printf_color("CARD OK", GREEN, true);
}

void getCardPANTest(void) {
  ST_cardData_t data;
  int x = getCardPAN(&data);
  if (x == WRONG_PAN) {
    printf_color("ERROR WORNG WRONG_PAN", YELLOW, true);
  }
  if (x == CARD_OK)
    printf_color("CARD OK", GREEN, true);
}

void runTest(const char *input, EN_terminalError_t expected, const char *desc,
             int *passed, int *total) {
  ST_terminalData_t termData;
  FILE *f = fmemopen((void *)input, strlen(input), "r");
  if (!f) {
    printf(RED "[ERROR] Failed to open memory stream\n" RESET);
    return;
  }
  FILE *orig_stdin = stdin;
  stdin = f;

  EN_terminalError_t result;
  scanf("%10s", termData.transactionDate);
  result = getTransactionDate(&termData);

  stdin = orig_stdin;
  fclose(f);

  (*total)++;
  if (result == expected) {
    (*passed)++;
    printf(GREEN "[PASS] %s\n" RESET, desc);
  } else {
    printf(RED "[FAIL] %s\n" RESET, desc);
  }
}

void getTransactionDatetest(void) {
  int passed = 0, total = 0;

  runTest("29/02/2024\n", TERMINAL_OK, "Leap year valid: 29/02/2024", &passed,
          &total);
  runTest("30/02/2024\n", WRONG_DATE, "Leap year invalid: 30/02/2024", &passed,
          &total);
  runTest("29/02/2023\n", WRONG_DATE, "Normal year invalid Feb 29", &passed,
          &total);
  runTest("30/04/2025\n", TERMINAL_OK, "Valid April 30", &passed, &total);
  runTest("31/04/2025\n", WRONG_DATE, "Invalid April 31", &passed, &total);
  runTest("31/01/2025\n", TERMINAL_OK, "Valid January 31", &passed, &total);
  runTest("32/01/2025\n", WRONG_DATE, "Invalid January 32", &passed, &total);
  runTest("2025-01-31\n", WRONG_DATE, "Invalid format 2025-01-31", &passed,
          &total);
  runTest("15/13/2025\n", WRONG_DATE, "Invalid month 13", &passed, &total);
  runTest("00/12/2025\n", WRONG_DATE, "Invalid day 0", &passed, &total);
  runTest("15/00/2025\n", WRONG_DATE, "Invalid month 0", &passed, &total);
  runTest("08/09/2025\n", TERMINAL_OK, "Valid date 08/09/2025", &passed,
          &total);

  printf("\nTest Summary: %d/%d passed\n", passed, total);
}

/*
void getTransactionDatetest(void) {
  ST_terminalData_t termData;
  EN_terminalError_t result;
  int passed = 0, total = 0;

  // 1. Leap year valid
  total++;
  strcpy(termData.transactionDate, "29/02/2024");
  result = getTransactionDate(&termData);
  if (result == TERMINAL_OK) {
    passed++;
    printf(GREEN "[PASS] Leap year valid: 29/02/2024\n" RESET);
  } else {
    printf(RED "[FAIL] Leap year valid: 29/02/2024\n" RESET);
  }

  // 2. Leap year invalid (Feb 30)
  total++;
  strcpy(termData.transactionDate, "30/02/2024");
  result = getTransactionDate(&termData);
  if (result == WRONG_DATE) {
    passed++;
    printf(GREEN "[PASS] Leap year invalid: 30/02/2024\n" RESET);
  } else {
    printf(RED "[FAIL] Leap year invalid: 30/02/2024\n" RESET);
  }

  // 3. Normal year invalid Feb 29
  total++;
  strcpy(termData.transactionDate, "29/02/2023");
  result = getTransactionDate(&termData);
  if (result == WRONG_DATE) {
    passed++;
    printf(GREEN "[PASS] Normal year invalid Feb 29\n" RESET);
  } else {
    printf(RED "[FAIL] Normal year invalid Feb 29\n" RESET);
  }

  // 4. Valid 30-day month
  total++;
  strcpy(termData.transactionDate, "30/04/2025");
  result = getTransactionDate(&termData);
  if (result == TERMINAL_OK) {
    passed++;
    printf(GREEN "[PASS] Valid April 30\n" RESET);
  } else {
    printf(RED "[FAIL] Valid April 30\n" RESET);
  }

  // 5. Invalid 30-day month
  total++;
  strcpy(termData.transactionDate, "31/04/2025");
  result = getTransactionDate(&termData);
  if (result == WRONG_DATE) {
    passed++;
    printf(GREEN "[PASS] Invalid April 31\n" RESET);
  } else {
    printf(RED "[FAIL] Invalid April 31\n" RESET);
  }

  // 6. Valid 31-day month
  total++;
  strcpy(termData.transactionDate, "31/01/2025");
  result = getTransactionDate(&termData);
  if (result == TERMINAL_OK) {
    passed++;
    printf(GREEN "[PASS] Valid January 31\n" RESET);
  } else {
    printf(RED "[FAIL] Valid January 31\n" RESET);
  }

  // 7. Invalid day > 31
  total++;
  strcpy(termData.transactionDate, "32/01/2025");
  result = getTransactionDate(&termData);
  if (result == WRONG_DATE) {
    passed++;
    printf(GREEN "[PASS] Invalid January 32\n" RESET);
  } else {
    printf(RED "[FAIL] Invalid January 32\n" RESET);
  }

  // 8. Invalid format
  total++;
  strcpy(termData.transactionDate, "2025-01-31");
  result = getTransactionDate(&termData);
  if (result == WRONG_DATE) {
    passed++;
    printf(GREEN "[PASS] Invalid format 2025-01-31\n" RESET);
  } else {
    printf(RED "[FAIL] Invalid format 2025-01-31\n" RESET);
  }

  // 9. Invalid month > 12
  total++;
  strcpy(termData.transactionDate, "15/13/2025");
  result = getTransactionDate(&termData);
  if (result == WRONG_DATE) {
    passed++;
    printf(GREEN "[PASS] Invalid month 13\n" RESET);
  } else {
    printf(RED "[FAIL] Invalid month 13\n" RESET);
  }

  // 10. Invalid day 0
  total++;
  strcpy(termData.transactionDate, "00/12/2025");
  result = getTransactionDate(&termData);
  if (result == WRONG_DATE) {
    passed++;
    printf(GREEN "[PASS] Invalid day 0\n" RESET);
  } else {
    printf(RED "[FAIL] Invalid day 0\n" RESET);
  }

  // 11. Invalid month 0
  total++;
  strcpy(termData.transactionDate, "15/00/2025");
  result = getTransactionDate(&termData);
  if (result == WRONG_DATE) {
    passed++;
    printf(GREEN "[PASS] Invalid month 0\n" RESET);
  } else {
    printf(RED "[FAIL] Invalid month 0\n" RESET);
  }

  // 12. Valid normal date
  total++;
  strcpy(termData.transactionDate, "08/09/2025");
  result = getTransactionDate(&termData);
  if (result == TERMINAL_OK) {
    passed++;
    printf(GREEN "[PASS] Valid date 08/09/2025\n" RESET);
  } else {
    printf(RED "[FAIL] Valid date 08/09/2025\n" RESET);
  }

  // === SUMMARY ===
  printf("\nTest Summary: %d/%d passed\n", passed, total);
}
*/
int main() {
#ifdef TEST_CARD_MODULE
  getCardHolderNameTest();
#endif

#ifdef TEST_TERMINAL_MODULE
  getTransactionDatetest();
#endif

  return 0;
}
