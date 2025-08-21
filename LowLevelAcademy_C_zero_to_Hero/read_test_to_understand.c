#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <string.h>
/*
fun fact std are file discraptor any file discraptor is Number repersent storage
meduiam
*/
struct database_header {
    unsigned short version;
    unsigned short employees;
    unsigned int filelength;
};

int main(){
	char *a_buf = " test stdout ";
	write(1, a_buf, strlen(a_buf))
 
    	return 0;
}
