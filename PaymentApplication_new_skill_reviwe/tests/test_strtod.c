#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char data[] = "28/12/2025";
char *token;
int dd,mm,yyyy;
token = strtok(data, "/");
dd = strtod(token, NULL);

token = strtok(NULL, "/");
mm = strtod(token, NULL);

token = strtok(NULL, "/");
yyyy = strtod(token, NULL);

if ( 
printf(" %d %d %d", dd, mm, yyyy);

return 0;
}
