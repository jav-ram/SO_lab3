#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/mman.h>

int main(int argc, char **argv) {

	char *x = argv[1];
	char *n = argv[2];

	size_t size = 128;

	void* shmem = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_SHARED);

	print("%d\n", shmem)

	/*printf("%s%s \n", x, n);*/

	return 0;
}
