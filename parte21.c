#include<stdio.h>
#include<time.h>

int main() {

	clock_t inicial;
	clock_t final;

	inicial = clock();

	int k;
	for (k = 0; k <1000000; k++){
		printf("%d\n", k);
	}

	int j;
	for (j = 0; j <1000000; j++){
		printf("%d\n", j);
	}

	int i;
	for (i = 0; i <1000000; i++){
		printf("%d\n", i);
	}

	final = clock();

	double tiempo = (double)final - (double)inicial;

	printf("\n %f \n", tiempo);

	return 0;
}
