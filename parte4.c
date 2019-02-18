#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<sys/wait.h>

int main() {
	pid_t id_f = fork();

	if (id_f != 0){
		/*PADRE*/	
		while(1){

		}
	} else {
		/*HIJO*/
		int i = 1;
		for (i; i <= 4000000; i++){
			printf("%d\n", i);
		}
	}

	return 0;
}
