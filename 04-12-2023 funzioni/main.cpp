#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


#define N_marche 5
const int N=100, prezzo=0, disponibili=1, vendute=2;
int g=0,scelta=0,un=0,du=0;
double entrate[N],uscite[N],bilancio=0;
char modelli[N_marche][30];

void stampamenu();
void aggiungi_entrata();
void aggiungi_uscita();
void visualizza_bilancio();

int main(int argc, char** argv) {
	
	
	strcpy(modelli[0],"ALFA");
	strcpy(modelli[1],"FIAT");
	strcpy(modelli[2],"BMW");
	strcpy(modelli[3],"audi");
	strcpy(modelli[4],"jeep");
	
	for(int i=0;i<N;i++){
		entrate[i]=0;
		uscite[i]=0;
	}
	
	double infomodelli[N_marche][3];
	
	infomodelli[0][prezzo]=15000.3;
	infomodelli[0][disponibili]= 3;
	infomodelli[0][vendute]=7;
	
	infomodelli[1][prezzo]=13400.3;
	infomodelli[1][disponibili]= 3;
	infomodelli[1][vendute]=7;
	
	infomodelli[2][prezzo]=2300.3;
	infomodelli[2][disponibili]= 3;
	infomodelli[2][vendute]=7;
	
	infomodelli[3][prezzo]=21000.3;
	infomodelli[3][disponibili]= 3;
	infomodelli[3][vendute]=7;
	
	while(scelta!=4){
		
		system("cls");
		stampamenu();
		scanf("%i",&scelta);
		
		switch(scelta){
			case 1:
				aggiungi_entrata();
				un++;
				break;
				
			case 2:
				aggiungi_uscita();
				du++;
				break;
				
			case 3:
				visualizza_bilancio();
				break;
		}
		
	}
	
	return 0;
}


void stampamenu(){
	printf("1- Aggiungi un' entrata\n2- Aggiungi un' uscita\n3- Visualizza bilancio\n4- Esci\n");
}

void aggiungi_entrata(){
	
	printf("inserisci l'entrata ");
	scanf("%lf",&entrate[un]);
	while (entrate[un]<=0){
		
		printf("ERRORE hai inserito un numero negativo\n");
		scanf("%lf ",&entrate[un]);
	}
	
	printf("hai inserito %lf come entrata \n",entrate[un]);
	system("pause");
}
	
void aggiungi_uscita(){
	printf("inserisci l'uscita ");
	scanf("%lf",&uscite[du]);
	
	while (uscite[du]<=0){
		
		printf("ERRORE hai inserito un numero negativo\n");
		scanf("%lf",&uscite[du]);
	}
	
	printf("hai inserito %lf come uscita\n",uscite[du]);
	system("pause");
}

void visualizza_bilancio(){
	double uscita=0;
	
	for(int y=0;y<un;y++){
		
		bilancio+=entrate[y];
	}
	
	printf("somma entrate %lf \n",bilancio);
	
	for(int y=0;y<du;y++){
		
		uscita+=uscite[y];
	}
	
	printf("somma delle uscite %lf \n",uscita);
	
	printf("il saldo %lf",(bilancio-uscita));
	system("pause");
}

