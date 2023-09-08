//STRUTTURATA -> OGGETTI
//STRUCT : nuovo tipo di dato che contiene più variabili
#include <stdio.h>
#include <string.h>

#define N 30

typedef struct monopattino{
	int potenza;
	int velocitaMax;
	int coppia;
	char coloreRuote[N];
	char pilota[N];
}monopattino_t;

void stampaMono(monopattino_t m){
	printf("Potenza: %i\n", m.potenza);
	printf("Velocita Max: %i\n", m.velocitaMax);
	printf("Coppia: %i\n", m.coppia);
	printf("ColoreRuote: %s\n", m.coloreRuote);
	printf("Pilota: %s\n", m.pilota);
}

//Questa funzione crea una COPIA del monopattino e 
//modifica quella (per valore)
void aumentaPotenza(monopattino_t m){
	m.potenza += 1;
}

void stampaMonoOk(monopattino_t * ptrM){
	printf("Potenza: %i\n", ptrM->potenza);
	printf("Velocita Max: %i\n", ptrM->velocitaMax);
	printf("Coppia: %i\n", ptrM->coppia);
	printf("ColoreRuote: %s\n", ptrM->coloreRuote);
	printf("Pilota: %s\n", ptrM->pilota);
}

void aumentaPotenzaOk(monopattino_t * ptrM){
	ptrM->potenza += 1;
}


int main(){
	monopattino_t mono1;
	mono1.potenza = 3;
	mono1.velocitaMax = 70;
	mono1.coppia = 30;
	strcpy(mono1.coloreRuote, "Rosso");
	strcpy(mono1.pilota, "Marco");
	
	monopattino_t mono2;
	mono2.potenza = 4;
	mono2.velocitaMax = 71;
	mono2.coppia = 31;
	strcpy(mono2.coloreRuote, "Giallo");
	strcpy(mono2.pilota, "Lucia");
	
	printf("Mono 1: dimensione %i indirizzo %i\n", sizeof(mono1), &mono1);
	printf("Mono 2: dimensione %i indirizzo %i\n", sizeof(mono2), &mono2);

	stampaMono(mono1);
	stampaMono(mono2);
	
	aumentaPotenza(mono1);
	printf("-------------\n");
	stampaMono(mono1);
	printf("-------------\n");
	
	aumentaPotenzaOk(&mono1);
	stampaMonoOk(&mono1);
	
}


