#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<sys/wait.h>

int main() {

	pid_t id_1;
	pid_t id_2;
	pid_t id_3;

	clock_t inicial;
	clock_t final;

	inicial = clock();

	id_1 = fork();

	if (id_1 != 0) {
		/* PADRE */
		wait(NULL);
		final = clock();
		double tiempo = (double) final - (double) inicial;
		printf("%f\n", tiempo);
	} else {
		/* HIJO */
		id_2 = fork();

		if (id_2 != 0) {
			int k;
			for(k=0; k<1000000; k++){
				printf("%d\n", k);
			}
			wait(NULL);
		} else {
			/* NIETO */
			id_3 = fork();
			if (id_3 != 0) {
				int j;
				for(j=0; j<1000000; j++){
					printf("%d\n", j);
				}
				wait(NULL);	
			} else {
				/*VICE NIETO*/
				int i;
				for(i=0; i<1000000; i++){
					printf("%d\n", i);
				}
				
			}
		}
		
	}

	return 0;
}
