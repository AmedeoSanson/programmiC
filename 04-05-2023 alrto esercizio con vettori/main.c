#include <stdio.h>
#include <stdlib.h>

#define N 50

int main(int argc, char *argv[]) {
	
	int numeri[N] = {1,5,7,8,4,6,8,9,1,2,3,2,1,5,4,8,7,9,5,4,1,2,3,6,5,8,7,4,1,2,1,2,1,4,5,4,9,7,8,7,4,5,1,2,3,6,3,9,5,2};

	
	int i,somma;
	float som=0,bog=1;
	for(i=0;i<N;i++){
		printf("%i - %i\n",i,numeri[i]);
	}
	
	printf("la somma e': ");
	
	for(i=0;i<N;i++){
		somma=somma+numeri[i];
		bog=bog*numeri[i];
	}
	
	printf("%i\n",somma);
	
	som=226/50;
	printf("la temperatura media e': %f\n",som);
	
	printf("il prodotto e': %i\n",bog);
	
	
	return 0;
}
