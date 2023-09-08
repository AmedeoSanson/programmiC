#include <stdio.h>
#include <stdlib.h>

#define N_CASELLE 9

/*
In questo file ho voluto tenere basso il livello di programmazione, per 
favorire le critiche su questo modo di sviluppare codice.
*/

int main(){
	char simboli[N_CASELLE];	
	int i, posizione;
	int nCelleLibere = 0;
	char giocatoreVincente = '-';
	bool parita = false;
	
	for(i=0; i<N_CASELLE; i++){
		simboli[i] = '-';
	}
	

	
	while(giocatoreVincente == '-' && parita == false){
		
		system("cls");
		
		printf("TURNO DEL GIOCATORE X:\n\n");
	
		printf("Questo e' il campo da gioco:\n\n");
		printf(" %c | %c | %c\n", simboli[0], simboli[1] ,simboli[2]);
		printf("-----------\n");
		printf(" %c | %c | %c\n",simboli[3] ,simboli[4], simboli[5]);
		printf("-----------\n");
		printf(" %c | %c | %c\n", simboli[6] ,simboli[7], simboli[8]);
		
		printf("Scegli una posizione da 1 a 9:\n\n");
		
		printf(" 1 | 2 | 3\n");
		printf("-----------\n");
		printf(" 4 | 5 | 6\n");
		printf("-----------\n");
		printf(" 7 | 8 | 9\n");
		printf("\n");
		
		scanf(" %d", &posizione);
		
		while(posizione <0 || posizione > 9 || simboli[posizione-1]!='-'){
			printf("Posizione non valida, inserire nuovamente:\n");
			scanf(" %d", &posizione);
		}
		
		simboli[posizione-1] = 'X';
		
		printf("Il nuovo campo e':\n");
		
		printf(" %c | %c | %c\n", simboli[0], simboli[1] ,simboli[2]);
		printf("-----------\n");
		printf(" %c | %c | %c\n",simboli[3] ,simboli[4], simboli[5]);
		printf("-----------\n");
		printf(" %c | %c | %c\n", simboli[6] ,simboli[7], simboli[8]);
		
		system("pause");
		
		system("cls");
	
		if(simboli[0]=='X' && simboli[1]=='X' && simboli[2]=='X'){
			printf("Il giocatore X ha vinto!");
			giocatoreVincente = 'X';
		} else if(simboli[3]=='X' && simboli[4]=='X' && simboli[5]=='X'){
			printf("Il giocatore X ha vinto!");
			giocatoreVincente = 'X';
		} else if(simboli[6]=='X' && simboli[7]=='X' && simboli[8]=='X'){
			printf("Il giocatore X ha vinto!");
			giocatoreVincente = 'X';
		} else if(simboli[0]=='X' && simboli[3]=='X' && simboli[6]=='X'){
			printf("Il giocatore X ha vinto!");
			giocatoreVincente = 'X';
		} else if(simboli[1]=='X' && simboli[4]=='X' && simboli[7]=='X'){
			printf("Il giocatore X ha vinto!");
			giocatoreVincente = 'X';
		} else if(simboli[2]=='X' && simboli[5]=='X' && simboli[8]=='X'){
			printf("Il giocatore X ha vinto!");
			giocatoreVincente = 'X';
		} else if(simboli[0]=='X' && simboli[4]=='X' && simboli[8]=='X'){
			printf("Il giocatore X ha vinto!");
			giocatoreVincente = 'X';
		} else if(simboli[2]=='X' && simboli[4]=='X' && simboli[6]=='X'){
			printf("Il giocatore X ha vinto!");
			giocatoreVincente = 'X';
		}
		
		for(i=0; i<N_CASELLE; i++){
			if(simboli[i] == '-'){
				nCelleLibere++;
			}
		}
		
		if(nCelleLibere == 0){
			parita = true;
		}
		
		
		if(giocatoreVincente != 'X' && parita == false){
			system("cls");
			
			printf("TURNO DEL GIOCATORE O:\n\n");
	
			printf("Questo e' il campo da gioco:\n\n");
			printf(" %c | %c | %c\n", simboli[0], simboli[1] ,simboli[2]);
			printf("-----------\n");
			printf(" %c | %c | %c\n",simboli[3] ,simboli[4], simboli[5]);
			printf("-----------\n");
			printf(" %c | %c | %c\n", simboli[6] ,simboli[7], simboli[8]);
			
			printf("Scegli una posizione da 1 a 9:\n\n");
			
			printf(" 1 | 2 | 3\n");
			printf("-----------\n");
			printf(" 4 | 5 | 6\n");
			printf("-----------\n");
			printf(" 7 | 8 | 9\n");
			printf("\n");
			
			scanf(" %d", &posizione);
			
			while(posizione <0 || posizione > 9 || simboli[posizione-1]!='-'){
				printf("Posizione non valida, inserire nuovamente:\n");
				scanf(" %d", &posizione);
			}
			
			simboli[posizione-1] = 'O';
			
			printf("Il nuovo campo e':\n");
			
			printf(" %c | %c | %c\n", simboli[0], simboli[1] ,simboli[2]);
			printf("-----------\n");
			printf(" %c | %c | %c\n",simboli[3] ,simboli[4], simboli[5]);
			printf("-----------\n");
			printf(" %c | %c | %c\n", simboli[6] ,simboli[7], simboli[8]);
			
			system("pause");
			
			system("cls");
		
			if(simboli[0]=='O' && simboli[1]=='O' && simboli[2]=='O'){
				printf("Il giocatore O ha vinto!");
				giocatoreVincente = 'O';
			} else if(simboli[3]=='O' && simboli[4]=='O' && simboli[5]=='O'){
				printf("Il giocatore O ha vinto!");
				giocatoreVincente = 'O';
			} else if(simboli[6]=='O' && simboli[7]=='O' && simboli[8]=='O'){
				printf("Il giocatore O ha vinto!");
				giocatoreVincente = 'O';
			} else if(simboli[0]=='O' && simboli[3]=='O' && simboli[6]=='O'){
				printf("Il giocatore O ha vinto!");
				giocatoreVincente = 'O';
			} else if(simboli[1]=='O' && simboli[4]=='O' && simboli[7]=='O'){
				printf("Il giocatore O ha vinto!");
				giocatoreVincente = 'O';
			} else if(simboli[2]=='O' && simboli[5]=='O' && simboli[8]=='O'){
				printf("Il giocatore O ha vinto!");
				giocatoreVincente = 'O';
			} else if(simboli[0]=='O' && simboli[4]=='O' && simboli[8]=='O'){
				printf("Il giocatore O ha vinto!");
				giocatoreVincente = 'O';
			} else if(simboli[2]=='O' && simboli[4]=='O' && simboli[6]=='O'){
				printf("Il giocatore O ha vinto!");
				giocatoreVincente = 'O';
			}
		}
		
		for(i=0; i<N_CASELLE; i++){
			if(simboli[i] == '-'){
				nCelleLibere++;
			}
		}
		
		if(nCelleLibere == 0){
			parita = true;
		}	
	}
	
	system("pause");
	system("cls");
	printf("Fine del gioco, alla prossima!");
}
