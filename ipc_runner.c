#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/mman.h>

int main() {

	pid_t id = fork();

	printf("%d", id);

	if (id != 0){
		execl("./ipc", "./ipc", "1", "b");
	} else {
		execl("./ipc", "./ipc", "2", "a");
	}

	return 0;
}
