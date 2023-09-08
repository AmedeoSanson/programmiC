#include <iostream>
#include <string.h>

#define N 30

typedef struct persona{
	char nome[N];
	char cognome[N];
	char data[N];
}persona_t;

typedef struct vettura{
	int potenza;
	float peso;
	char colore[N];
	struct persona pilota; //solo in questo caso devo scrivere con struct
}vettura_t;

typedef struct scuderia{
	char nome[N];
	struct vettura auto1;
	struct vettura auto2;
}scuderia_t;

void stampaScudera(scuderia_t *s);

int main(int argc, char** argv) {
	
	scuderia_t ferrari;
	strcpy(ferrari.nome, "ferrari");
	ferrari.auto1.potenza=1031;
	ferrari.auto1.peso=600;
	strcpy(ferrari.auto1.colore, "rosso");
	strcpy(ferrari.auto1.pilota.nome, "clarck");
	strcpy(ferrari.auto1.pilota.cognome, "joe");
	strcpy(ferrari.auto1.pilota.data, "12-12-12");
	
	ferrari.auto2.potenza=1431;
	ferrari.auto2.peso=300;
	strcpy(ferrari.auto2.colore, "rosso-scuro");
	strcpy(ferrari.auto2.pilota.nome, "gorgio");
	strcpy(ferrari.auto2.pilota.cognome, "gorg");
	strcpy(ferrari.auto2.pilota.data, "13-13-13");
	
	stampaScudera(&ferrari);
	
	return 0;
}

void stampaScudera(scuderia_t *s){
	
	printf("nome della scuderia %s\n",s->nome);
	printf("peso della vettura 1  %f\n",s->auto1.peso);
	printf("potenza della vettura 1 %i\n",s->auto1.potenza);
	printf("colore della vettura 1 %s\n",s->auto1.colore);
	printf("pilota della vettura 1 %s\n",s->auto1.pilota.nome);
	
	printf("peso della vettura 2  %f\n",s->auto2.peso);
	printf("potenza della vettura 2 %i\n",s->auto2.potenza);
	printf("colore della vettura 2 %s\n",s->auto2.colore);
	printf("pilota della vettura 2 %s\n",s->auto2.pilota.nome);
	
}
