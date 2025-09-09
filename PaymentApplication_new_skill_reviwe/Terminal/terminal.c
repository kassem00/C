#include "terminal.h"





EN_terminalError_t getTransactionDate(ST_terminalData_t *termData)
{
if (strlen(termData->transactionDate) != 10 || termData->transactionDate[2] != '/' || termData->transactionDate[5] != '/')
	return WRONG_DATE;

char *token;
int dd,mm,yyyy;

token = strtok(termData->transactionDate, "/");
dd = strtod(token, NULL);

token = strtok(NULL, "/");
mm = strtod(token, NULL);

token = strtok(NULL, "/");
yyyy = strtod(token, NULL);

if ( mm > 12 || dd > 31 || dd == 0 || yyyy == 0 || mm == 0)
	return WRONG_DATE;

if ( YYYY %100 == 0  && YYYY%400 == 0 && mm == 2 && dd > 30)
	return WRONG_DATE;

if ( YYYY %100 != 0  && YYYY%400 != 0 && mm == 2 && dd > 29)
	return WRONG_DATE;

   if (mm == 1 || mm == 3 || mm == 5
        || mm == 7 || mm == 8 || mm == 10
        || mm == 12) {
        if (dd > 32)
		return WRONG_DATE;
    }

   else if (mm == 4 || mm == 6
             || mm == 9 || mm == 11) {
        if ( dd > 31)
		return WRONG_DATE;
    }
return TERMINAL_OK;
}
