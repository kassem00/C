#define NUM_OF_HEIGHT 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int *height = malloc(NUM_OF_HEIGHT * sizeof(*height));

	for(int i = 0; i < NUM_OF_HEIGHT; i++){
	printf("%d : %d\n", i, *height);
	}
	return 0;
}
