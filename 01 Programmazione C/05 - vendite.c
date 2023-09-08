#include <stdio.h>
#include <stdlib.h>

#define N 100

/*
In questo programma vengono analizzate le vendite di un 
negozio di cinture.
*/
int main()
{
	//Questo vettore contiene la quantità di cinture vendute nei primi 100 giorni dell'anno 2021
	int vendite[N] = {11,51,71,82,43,64,85,96,1,2,73,82,91,45,94,48,25,39,55,64,71,82,934,36,25,48,75,4,16,27,1,82,91,14,50,4,496,73,8,67,84,45,21,520,37,63,32,94,5,26, 17,5,47,28,4,6,38,93,1,32,3,2,516,57,4,88,79,94,52,41,1,32,43,65,56,87,7,84,19,26,1,2,41,14,51,423,94,75,8,7,54,657,1,82,9,39,36,53,96,57};

	/*
	PARTE 1: il programma deve stampare una lista dei primi 100 giorni (1...100)
	e per ogni giorno dev'essere indicato il numero di cinture vendute
	*/
	printf("PARTE 1\n");
	int i;
	
	for(i=0; i<N; i++){
		printf("%d - %d\n", i+1, vendite[i]);
	}
	
	
	system("pause");
	system("cls");
	
	/*
	PARTE 2: il programma deve stampare il totale di cinture vendute
	*/
	printf("PARTE 2\n");
	
	int somma = 0;
	
	for(i=0; i<N; i++){
		somma = vendite[i] + somma;
		//somma += vendite[i];
	}
	printf("%d", somma);
	
	system("pause");
	system("cls");
	
	/*
	PARTE 3: il programma deve stampare quante cinture sono state vendute il primo giorno,
	il 30^ giorno, il 60^ giorno e l'ultimo giorno
	*/
	printf("PARTE 3\n");
	
	printf("1 - %d\n",vendite[0]);
	printf("30 - %d\n",vendite[29]);
	printf("60 - %d\n",vendite[59]);
	printf("100 - %d\n",vendite[99]);
	
	
	system("pause");
	system("cls");
	
	/*
	PARTE 4: il programma stamperà solo i giorni "scarsi di vendite", in cui sono state
	vendute meno di 5 cinture
	*/
	printf("PARTE 4\n");
	int scarso = 5;
	
	for(i=0; i<N; i++){
		if(vendite[i] < scarso){
			printf("giornata scarsa: %d\n", i+1);
		}
	}
	
	
	system("pause");
	system("cls");
	
	/*
	PARTE 5: il programma deve stampare la media delle cinture vendute per giorno
	*/
	printf("PARTE 5\n");
	
	printf("Media: %.2f\n", somma*1.0/N);
	
	system("pause");
	system("cls");
	
	/*
	PARTE 6: il programma deve stampare la media delle cinture vendute a febbraio 2021
	*/
	printf("PARTE 6\n");
	
	float sommaFebbraio = 0.0;
	
	for(i=30; i<58; i++){
		sommaFebbraio = vendite[i] + sommaFebbraio;
	}
	
	printf("Media febbraio: %.2f", sommaFebbraio/28);
	
	system("pause");
	system("cls");
	
	/*
	PARTE 7: il programma deve stampare il numero massimo di cinture vendute in un singolo
	giorno
	*/
	printf("PARTE 7\n");
	
	
	
	system("pause");
	system("cls");
	
	/*
	PARTE 8: il programma deve stampare la quantità di cinture vendute a gennaio
	*/
	printf("PARTE 8\n");
	
	
	
	system("pause");
	system("cls");
	
	/*
	PARTE 9: il programma deve stampare la quantità di giorni totali in cui ci sono state
	vendite ottime, cioè in cui sono state vendute più di 100 cinture
	*/
	printf("PARTE 9\n");
	
	
	
	system("pause");
	system("cls");
	
	/*
	PARTE 10: il programma stamperà la quantità di denaro incassato, sapendo che:
	- a gennaio le cinture costavano 15 € l'una
	- a febbraio e a marzo le cinture costavano 17.50 € l'una
	- ad aprile le cinture costavano 16.82 € l'una
	*/
	printf("PARTE 10\n");
	
	
	
	system("pause");
	system("cls");
	
	/*
	PARTE 11: il programma deve stampare il giorno (o i giorni) in cui sono state vendute 
	meno cinture in assoluto (oltre al numero del giorno da 1 a 100 dovrà essere anche stampato
	il mese).
	*/
	printf("PARTE 11\n");
	
	
	
	system("pause");
	system("cls");
	
	/*
	PARTE 12: il programma stamperà il numero di cinture vendute ogni giorno, nel formato
	"gg/mm/aaaa -> n°cinture"; il mese sarà dedotto dal conteggio del giorno
	*/
	printf("PARTE 12\n");
	int gg = 1;
	
	for(i=0; i<N; i++){
		if(i<=30){//siamo a gennaio
			printf("%d/01/2021 -> %d\n", gg, vendite[i]);
			
			if(gg == 31){
				gg = 1;
			}else{
				gg++;
			}			
		}else if(30 < i && i <=58){//febbraio
			printf("%d/02/2021 -> %d\n", gg, vendite[i]);
			
			if(gg == 28){
				gg = 1;
			}else{
				gg++;
			}
		}else if(58 < i && i <= 89){//marzo
			printf("%d/03/2021 -> %d\n", gg, vendite[i]);
			
			if(gg == 31){
				gg = 1;
			}else{
				gg++;
			}
		}else{//aprile
			printf("%d/04/2021 -> %d\n", gg, vendite[i]);
			gg++;
		}
	}
	
	
	system("pause");
	system("cls");
	
	/*
	PARTE 13: il programma deve stampare la quantità di giorni in cui gli acquisti sono
	stati superiori alla media.
	*/
	printf("PARTE 13\n");
	
	
	
	system("pause");
	system("cls");
}




