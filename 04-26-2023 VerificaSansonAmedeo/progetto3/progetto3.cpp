#include <iostream>



int main(int argc, char** argv) {
	
	int vet[20] = {8, 4, -2, 6, 10, 4, 8, 7, 30, 2, 44, 7, 5, 1, 0, 0, 9, 4, 2, 3};
	int somma=0,piccolo,numU,vet2[20],vet3[40];
	
	for(int i=0;i<20;i++){
		somma+=vet[i];
	}
	
	printf("la somma dei numeri del vettore e': %i",somma);
	
	piccolo=vet[0];
	for(int i=0;i<20;i++){
		
		if(piccolo<vet[i]){
			piccolo=vet[i];
		}
	}
	printf("\nil numero piu' piccolo nel vettore e': %i",piccolo);
	
	printf("\ndammi un numero e ti dico se e' presente nel vettore: ");
	scanf("%i",&numU);
	
	int conferma=0;
	for(int i=0;i<20;i++){
		
		if(numU==vet[i]){
			printf("\nil numero e' presente\n");
			i=21;
			conferma++;
		}
	}
	
	if(conferma!=1){
		printf("\nnon e' presente\n");
	}
	
	int e=19;
	for(int i=0;i<20;i++){
				
		vet2[i]=vet[e];
		vet2[i]+=1;
		e--;
	}
	
		
	int f;
	for(int i=0;i<40;i++){
		
		if(i<20){
			vet3[i]=vet[i];
		}
		else{
			f=(i-20);
			vet3[i]=vet2[f];
		}
	}
	
	
	return 0;
}
