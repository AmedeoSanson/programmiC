#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N_SQUADRE 20
#define N 12
#define N_STATISTICHE 8

int main(){
	char nomi[N_SQUADRE][N];
	
	strcpy(nomi[0],"Inter");
	strcpy(nomi[1],"Napoli");
	strcpy(nomi[2],"Milan");
	strcpy(nomi[3],"Juventus");
	strcpy(nomi[4],"Atalanta");
	strcpy(nomi[5],"Lazio");
	strcpy(nomi[6],"Roma");	
	strcpy(nomi[7],"Fiorentina");
	strcpy(nomi[8],"Verona");
	strcpy(nomi[9],"Torino");
	strcpy(nomi[10],"Empoli");
	strcpy(nomi[11],"Sassuolo");
	strcpy(nomi[12],"Bologna");
	strcpy(nomi[13],"Udinese");
	strcpy(nomi[14],"Spezia");
	strcpy(nomi[15],"Sampdoria");
	strcpy(nomi[16],"Cagliari");
	strcpy(nomi[17],"Venezia");
	strcpy(nomi[18],"Genoa");
	strcpy(nomi[19],"Salernitana");
	
	int statistiche[20][8] = {	
		{53,	23,	16,	5,	2,	54,	19,	35}, 	//1
		{52,	24,	16,	4,	4,	45,	16,	29},	//2
		{52,	24,	16,	4,	4,	49,	26,	23},	//3
		{45,	24,	13,	6,	5,	36,	21,	15},	//4
		{43,	23,	12,	7,	4,	45,	28,	16},	//5
		{39,	24,	11,	6,	7,	49,	39,	10},	//6
		{39,	24,	12,	3,	9,	40,	30,	10},	//7
		{36,	23,	11,	3,	9,	41,	33,	8},		//8
		{33,	24,	9,	6,	9,	43,	40,	3},		//9
		{32,	23,	9,	5,	9,	30,	23,	7},		//10
		{30,	24,	8,	6,	10,	37,	47,	-18},	//11
		{29,	24,	7,	8,	9,	39,	42,	-3},	//12
		{28,	23,	8,	4,	11,	29,	37,	-8},	//13
		{27,	23,	6,	9,	8,	33,	36,	-3},	//14
		{26,	24,	7,	5,	12,	26,	44,	-18},	//15
		{23,	24,	6,	5,	13,	33,	41,	-8},	//16
		{20,	24,	4,	8,	12,	24,	45,	-21},	//17
		{18,	23,	4,	6,	13,	20,	42,	-22},	//18
		{14,	24,	1,	11,	12,	20,	45,	-25},	//19
		{11,	23,	3,	3,	17,	16,	55,	-39},	//20
	};
	
	/*
	PARTE 1:
	Stampare nel terminale l'elenco delle squadre nel formato:
	
	[nome squadra] - [col. 1] [col. 2] ... [col. 8]
	[nome squadra] - [col. 1] [col. 2] ... [col. 8]
	...
	
	Sfida ulteriore: disegnare un bordo attorno alla tabella appena stampata
	*/
	printf("PARTE 1\n");
	
	int r=0,c=0;
	
	for(r=0;r<N_SQUADRE;r++){
		
		printf("%s ",nomi[r]);
		for(c=0;c<N_STATISTICHE;c++){
			
			printf("- %i ",statistiche[r][c]);
		}
		
		printf("\n");
	}
	
	system("pause");
	system("cls");
	/*
	PARTE 2:
	Stampare a terminale il numero di partite giocate dalla Sampdoria
	*/
	printf("PARTE 2\n");
	
	printf("il numero di partite giocate dalla Sampdoria e' %i \n",statistiche[15][1]);
	
	system("pause");
	system("cls");
	
	/*
	PARTE 3:
	Chiedere all'utente il nome di una squadra.
	Stampare i punti e la differenza reti della squadra scelta.
	*/
	printf("PARTE 3\n");
	
	int scud;
	
	printf("inserisci il numero di una squadra\n");	
	
	scanf("%i", &scud);

	printf("la squadra che hai scelto ha totalizzato %i punti e ha una differenza di %i reti\n",statistiche[scud][5],statistiche[scud][7]);
	
	system("pause");
	system("cls");
	
	/*
	PARTE 4:
	Stampare il punteggio massimo ottenuto nel campionato e il nome
	della squadra che lo ha ottenuto.
	*/
	printf("PARTE 4\n");
	int t, punteggio=0,s;
	
	for(t=0;t<20;t++){
		
		if(punteggio<statistiche[t][0]){
			
			punteggio=statistiche[t][0];
			s=t;
		}
	}
	
	printf("la squadra che ha totalizzato il maggior numero di punti e': %s con il punteggio di %i \n",nomi[s],statistiche[s][0]);
	
	system("pause");
	system("cls");
	
	/*
	PARTE 5:
	Stampare il nome della squadra che ha perso più partite.
	*/
	printf("PARTE 5\n");
	
	punteggio=0;
	
	for(t=0;t<20;t++){
		
		if(punteggio<statistiche[t][4]){
			
			punteggio=statistiche[t][4];
			s=t;
		}
	}
	
	printf("la squadra che ha totalizzato il maggior numero di punti e': %s con il punteggio di %i \n",nomi[s],statistiche[s][4]);
	
	system("pause");
	system("cls");
	
	/*
	PARTE 6:
	Stampare il numero di squadre che hanno vinto più di 10 partite.
	*/
	printf("PARTE 6\n");
	
	system("pause");
	system("cls");
	
	/*
	PARTE 7:
	Stampare la quantità media di partite pareggiate dalle squadre
	e i nomi delle squadre che hanno pareggiato esattamente quel numero di
	partite (se ce ne sono)
	*/
	printf("PARTE 7\n");
	
	system("pause");
	system("cls");
	
	/*
	PARTE 8:
	La "Differenza reti" è la differenza tra i goal fatti e i goal subiti.
	Controllare la colonna della differenza reti e, se il valore è sbagliato,
	correggerlo.
	*/
	printf("PARTE 8\n");
	
	system("pause");
	system("cls");
	
	/*
	PARTE 9:
	Chiedere all'utente di inserire un valore G.
	Stampare i nomi delle squadre che hanno segnato più di G goal.
	*/
	printf("PARTE 9\n");
	
	system("pause");
	system("cls");	
}
