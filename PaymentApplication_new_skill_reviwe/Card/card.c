#include "card.h"

EN_cardError_t getCardHolderName(ST_cardData_t *cardData) {
  char *holdername;
  scanf("Enter card holdr name = %s", holdername);
  if (holdername == NULL || strlen(holdername) < 20 || strlen(holdername) > 24)
    return WRONG_NAME;
  cardData->cardHolderName = holdername;
  return CARD_OK;
}
