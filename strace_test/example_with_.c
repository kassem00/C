#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int x = fork();
	if (x == 0)
	{
		printf("from child i say \n");
	}else{
		printf("from parent \n");

	}
	return (0);
}
