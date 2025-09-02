#define RESET "\x1b[0m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#include "../Card/card.h"
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

int main() {
  getCardHolderNameTest();
  return 0;
}
