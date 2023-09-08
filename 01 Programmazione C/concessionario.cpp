#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int N = 100;
const int M = 20;

const int PREZZO = 0;
const int MAGAZZINO = 1;
const int VENDUTE = 2;

void stampaMenu(){
	printf("1. Aggiungi un’entrata\n2. Aggiungi un’uscita\n3. Visualizza bilancio\n4. Visualizza modelli\n5. Vendi auto\n6. Aggiungi auto\n7. Esci\n");
}

int chiediScelta(){
	int s;
	scanf("%i", &s);
	
	while(s < 1 || s > 7){
		printf("Scelta errata, inserire di nuovo la scelta\n");
		scanf("%i", &s);
	}
	
	return s;
}

float chiediImporto(){
	float importo;
	printf("Inserisci l'importo:\n");
	scanf("%f", &importo);
	
	while(importo < 0){
		printf("ERRORE! Inserisci l'importo:\n");
		scanf("%f", &importo);
	}
	
	return importo;
}

void visualizzaModelli(char modelli[M][30], float info[M][3]){
	
	for(int i=0; i<M; i++){
		if(strcmp(modelli[i], "") != 0){
			printf("Nome: %s | Prezzo: %f | Disponibili: %f | Vendute: %f\n",modelli[i],info[i][PREZZO],info[i][MAGAZZINO],info[i][VENDUTE]);
		}else{
			break; //esce dal ciclo quando non trova più modelli
		}
	}	
}

int indiceAuto(char modelli[M][30], char nome[30]){
	for(int i=0; i<M; i++){
		if(strcmp(modelli[i], nome) == 0){
			return i; //L'auto è in posizione i
		}
	}
	
	return -1; //L'auto non c'è
}


void vendiAuto(char modelli[M][30], float info[M][3]){
	printf("Scegli l'auto da vendere:\n");
	char nomeAuto[30];
	scanf("%s", nomeAuto);
	
	int pos = indiceAuto(modelli, nomeAuto);
	
	if(pos >= 0){
		if(info[pos][MAGAZZINO] > 0){
			printf("Auto venduta!\n");
			info[pos][MAGAZZINO] --;
			info[pos][VENDUTE] ++;
		}else{
			printf("Auto non piu' disponibile\n");
		}
	}else{
		printf("Auto non presente\n");
	}
}

void aggiungiAuto(char modelli[M][30], float info[M][3]){
	printf("Auto da aggiungere:\n");
	char nomeAuto[30];
	scanf("%s", nomeAuto);
	
	int pos = indiceAuto(modelli, nomeAuto);
	
	if(pos >= 0){ //Il modello è già presente nella lista
		info[pos][MAGAZZINO] ++;
		printf("Auto aggiunta!\n");
		
	}else{ //Il modello non è presente nella lista
		for(int i=0; i<M; i++){
			if(strcmp(modelli[i], "")==0){
				strcpy(modelli[i] , nomeAuto);
				printf("Scrivi il prezzo: \n");
				scanf("%f", &info[i][PREZZO]);
				
				info[i][MAGAZZINO] = 1;
				return;
			}
		}
	}
	
}

int main(){
	float entrate[N];
	float uscite[N];
	
	int posLibEntrate = 0;
	int posLibUscite = 0;
	
	int i;
	for(i=0; i<N; i++){
		entrate[i] = 0;
		uscite[i] = 0;
	}
	
	char modelli[M][30];
	strcpy(modelli[0],"Maserati");
	strcpy(modelli[1],"Ferrari");
	strcpy(modelli[2],"Panda");
	strcpy(modelli[3],"Dacia");
	
	for(int i=4; i<M; i++){
		strcpy(modelli[i],"");
	}
	
	float infoModelli[M][3];
	
	infoModelli[0][PREZZO] = 120000.43;
	infoModelli[0][MAGAZZINO] = 3;
	infoModelli[0][VENDUTE] = 2;
	
	infoModelli[1][PREZZO] = 148993.3;
	infoModelli[1][MAGAZZINO] = 1;
	infoModelli[1][VENDUTE] = 0;
	
	infoModelli[2][PREZZO] = 15603.00;
	infoModelli[2][MAGAZZINO] = 1;
	infoModelli[2][VENDUTE] = 9;
	
	infoModelli[3][PREZZO] = 12000.43;
	infoModelli[3][MAGAZZINO] = 3;
	infoModelli[3][VENDUTE] = 1;
	
	for(int i=4; i<M; i++){
		infoModelli[i][PREZZO] = 0;
		infoModelli[i][MAGAZZINO] = 0;
		infoModelli[i][VENDUTE] = 0;
	}
	
	int scelta = 0;
	
	while(scelta!=7){
		system("cls");
		stampaMenu();
		scelta = chiediScelta();
		
		switch(scelta){
			case 1:{ //Aggiungi entrata
				float nuovaEntrata = chiediImporto();
				
				entrate[posLibEntrate] = nuovaEntrata;
				
				posLibEntrate++;
								
				break;
			}
			case 2:{ //Aggiungi uscita
				float nuovaUscita = chiediImporto();
				
				uscite[posLibUscite] = nuovaUscita;
				
				posLibUscite++;
				
				break;
			}
			case 3:{ //Visualizza bilancio
				break;
			}
			case 4:{ //Visualizzare i modelli e le info
				visualizzaModelli(modelli, infoModelli);
				break;
			}
			case 5:{//Vendere 1 auto
				vendiAuto(modelli, infoModelli);
				break;
			}
			case 6:{//Aggiungere 1 auto
				aggiungiAuto(modelli, infoModelli);
				break;
			}
			case 7:{
				printf("Bye!");
				break;
			}
		}
		system("pause");
	}
}


