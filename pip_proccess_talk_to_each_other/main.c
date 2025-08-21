#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[]){
	int fd[2];
	/* read fd[0]
	 * write fd[1]
	 */
	if (pipe(fd) == -1){
		printf("ERROR ouccured with opening pipe");
		return 1;
	}
	int id = fork();
	if (id == 0){
		close(fd[0]);/* because file discraptor inherted we have to close the read end*/
		int x;
		printf("input number: ");
		scanf("%d", &x);
		if (write(fd[1], &x, sizeof(int)) == -1){
			printf("error while writing to pipe ");
			return 2;
		}
		close(fd[1]);
	} else {
		close(fd[1]);/* because file discraptor inherted we have to close the write end*/
		int y;
		if (read(fd[0], &y, sizeof(int)) == -1 ){
			printf("error while reading from pipe ");
			return 3;
		}
		close(fd[0]);
		printf("child say : %d\n", y);
	}

	return 0;
}
