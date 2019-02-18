#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>


int main() {
	int fork1 = fork();
	int fork2 = fork();
	int fork3 = fork();
	int fork4 = fork();

	printf("\nnani\n");

	return 0;
}
