#include <iostream>
#include <string.h>

#define N 30


int main(int argc, char** argv) {
	
	char citta[N];
	int eta,soldi;
	
	printf("citta' natale: ");
	scanf("%s",&citta);
	
//	printf("%s",citta);
	
	printf("eta': ");
	scanf("%i",&eta);
	
//	printf("%i",eta);
	
	printf("soldi': ");
	scanf("%i",&soldi);
	
	printf("%c",citta[0]);
	
	for(int i=0;i<N;i++){
		
		if(citta[i]=='\0'){
			i-=1;
			printf("%c",citta[i]);
			break;
		}
	}
	
	if(eta>0 && eta<130){
		printf("\neta' valida \n");
	}
	else{
		printf("\neta' non valida \n");
	}
	
	if(soldi<=0){
		printf("ti capisco benissimo");
	}
	else if(soldi<=1000){
		printf("poverino");
	}
	else if(soldi<=10000){
		printf("puoi fare meglio");
	}
	else if(soldi<=100000){
		printf("ma non dire bugie");
	}
	else if(soldi>100000){
		printf("di sicuro evadi le tasse");
	}
	
	return 0;
}
