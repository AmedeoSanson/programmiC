#include <iostream>
#include <string.h>
// STRUTTURA -> OGGETTI
//STRUCT: NUOVO TIPO DI DATO CHE CONTIENE PIù VARIABILI
#define N 30
typedef struct monopattino{
	int potenza;
	int velocitaMAx;
	int coppia;
	char colore[N];
	char pilota[N];
}monopattino_t;// adesso anziché scrivere struct monopattino posso richiamare lo struct con monopattino_t

void stampaMono(monopattino_t *m);

void aumentaPotenza(struct monopattino m);//questa non va

void aumentaPotenzaOK(struct monopattino *m);//ricevo l'indirizzo del monopattino

int main(int argc, char** argv) {
	
	monopattino_t mono1;
	
	mono1.potenza=3;
	mono1.velocitaMAx=70;
	mono1.coppia=30;
	strcpy(mono1.colore,"rosso");
	strcpy(mono1.pilota,"marco");
	
	struct monopattino mono2;
	
	mono2.potenza=1;
	mono2.velocitaMAx=7;
	mono2.coppia=3;
	strcpy(mono2.colore,"nero");
	strcpy(mono2.pilota,"luca");
	
	printf("mono 1: dimensione %i  indirizzo %i\n",sizeof(mono1),&mono1);
	stampaMono(&mono1);
	
	printf("\nmono 2: dimensione %i  indirizzo %i\n",sizeof(mono2),&mono2);
	stampaMono(&mono2);
	
	aumentaPotenza(mono1);
	printf("mono 1:potenza %i\n", mono1.potenza);
	
	aumentaPotenzaOK(&mono1);
	printf("mono 1:potenza %i ", mono1.potenza);
	
	return 0;
}

void stampaMono(monopattino_t *m){
	
	printf("potenza %i\n",m->potenza);
	printf("velocitaMAx %i\n",m->velocitaMAx);
	printf("coppia %i\n",m->coppia);
	printf("colore %s\n",m->colore);
	printf("pilota %s\n",m->pilota);
}

void aumentaPotenza(struct monopattino m){
	
	m.potenza+=1;
}

void aumentaPotenzaOK(struct monopattino *m){
	
	//(*m).potenza+=1;
	m->potenza+=1;
}
