#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8



int main(void){

	int vettore[N];
	int somma = 0;
	int max[N], min[N],s=0,d=0;
	int kmax, kmin;
	srand(time(NULL));
 for(int i = 0; i < N; i++){
 	max[i]=0;
	min[i]=0;
 }
 for(int i = 0; i < N; i++){
 	
	vettore[i] = rand() % 100;
	printf(" %i : %i\n", i + 1, vettore[i]);
	somma += vettore[i];
	
	if(i<1){
		
 		max = vettore[i];
 		min = vettore[i];
 	}
	if(vettore[i]=>max){
		
		max = vettore[i];
   		kmax = i+1;
   		s++
   }
   
   else if(vettore[i]<=min){
   	
   		min = vettore[i];
    	kmin = i+1;
    	d++;
	}
 }
 float media = (float)somma / N;

 printf("\nLa somma e': %i\n", somma);
 printf("La media e': %.3f\n", media);
 printf("Il maggiore e': %i e sta in posizione: %i\n", max, kmax);
 if(s>1){
		
 		printf("si è ripetuto %i volte\n", s);
	 }
 printf("Il minore e': %i e sta in posizione: %i\n", min, kmin);
}
