#include "card.h"

EN_cardError_t getCardHolderName(ST_cardData_t *cardData) {
  int len = 0;
  printf("Enter Card Holder Name : ");
  scanf("%s", cardData->cardHolderName);
  if (cardData->cardHolderName == NULL)
    return WRONG_NAME;
  for (len = 0; cardData->cardHolderName[len] != '\0'; len++)
    ;
  if (len < 20 || len > 24)
    return WRONG_NAME;
  return CARD_OK;
}

EN_cardError_t getCardPAN(ST_cardData_t *cardData) {
  int len = 0;
  printf("Primary Account Number : ");
  scanf("%s", cardData->primaryAccountNumber);
  if (cardData->primaryAccountNumber == NULL) {
    return WRONG_PAN;
  }

  for (len = 0; cardData->primaryAccountNumber[len] != '\0'; len++)
    if (atoi((cardData->primaryAccountNumber + len)) == -1)
      return WRONG_PAN;
  if (len > 20 || len < 16)
    return WRONG_PAN;
  return CARD_OK;
}
