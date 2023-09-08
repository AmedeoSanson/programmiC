#include <stdio.h>
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
	struct persona pilota;
}vettura_t;

typedef struct scuderia{
	char nome[N];
	struct vettura auto1;
	struct vettura auto2;
}scuderia_t;

void stampaInfo(scuderia_t * scu){
	printf("Nome: %s\n", scu->nome);
	
	printf("Auto 1 - potenza: %i\n", scu->auto1.potenza);
	printf("Auto 1 - peso: %f\n", scu->auto1.peso);
	printf("Auto 1 - colore: %s\n", scu->auto1.colore);
	printf("Auto 1 - nome pilota: %s\n", scu->auto1.pilota.nome);
	printf("Auto 1 - cognome pilota: %s\n", scu->auto1.pilota.cognome);
	printf("Auto 1 - data pilota: %s\n", scu->auto1.pilota.data);

	printf("Auto 2 - potenza: %i\n", scu->auto2.potenza);
	printf("Auto 2 - peso: %f\n", scu->auto2.peso);
	printf("Auto 2 - colore: %s\n", scu->auto2.colore);
	printf("Auto 2 - nome pilota: %s\n", scu->auto2.pilota.nome);
	printf("Auto 2 - cognome pilota: %s\n", scu->auto2.pilota.cognome);
	printf("Auto 2 - data pilota: %s\n", scu->auto2.pilota.data);
}

int main(){
	
	scuderia_t ferrari;
	strcpy(ferrari.nome, "Ferrari");
	
	ferrari.auto1.potenza = 1035;
	ferrari.auto1.peso = 600;
	strcpy(ferrari.auto1.colore,"Rosso");
	strcpy(ferrari.auto1.pilota.nome, "Charles");
	strcpy(ferrari.auto1.pilota.cognome, "Leclerc");	
	strcpy(ferrari.auto1.pilota.data, "03/05/1997");
	
	ferrari.auto2.potenza = 1035;
	ferrari.auto2.peso = 600;
	strcpy(ferrari.auto2.colore,"Rosso");
	strcpy(ferrari.auto2.pilota.nome, "Carlos");
	strcpy(ferrari.auto2.pilota.cognome, "Sainz");	
	strcpy(ferrari.auto2.pilota.data, "03/05/1994");
	
	stampaInfo(&ferrari);
}
