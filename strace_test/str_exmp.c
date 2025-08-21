#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num;
	FILE *fp;
	
	printf("starting program after init\n");
	fp = fopen("myfile.txt", "w");
	if (fp == NULL)
	{
		printf("/!\\ ERROR opening the file /!\\\n");
		exit(1);
	}
	fprintf(fp, "hello file write\n");
	fclose(fp);
	printf("Done ^*^\n");
	return (0);
}
