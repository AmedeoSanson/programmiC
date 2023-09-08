#include <iostream>
#include <string.h>
#include <stdlib.h>
#define N 100

void menu();
void aggali(char *ali, int *cal);
void rimali(char *ali, int *cal);
void visali(char *ali, int *cal);

int main(int argc, char** argv) {
	
	char alimenti[N];
	int scelta=0,q=1,calorie[N],num=0;
	menu();
	while (q)
	scanf("%i",scelta);
	
	switch (scelta){
		case 1:
			if(num<100){
				aggali(&alimenti[num],&calorie[num]);
				num++;
			}
			else{
				printf("basta mangare\n");
			}
			break;
		case 2:
			if(num<=0){
				int e=0;
				printf("digita il numero del' elemento che vuoi cancellare: ");
				scanf("%i",e);
				
				rimali(&alimenti[e],&calorie[e]);
				num--;
			}
			else{
				printf("non hai ancora mangiato nulla\n");
			}
			break;
		case 3: 
			 //visali(&alimenti,&calorie);
			break;
	}
	
	return 0;
}

void menu(){
	
	printf("1. Aggiungi alimento\n2. Rimuovi alimento\n3. Visualizza statistiche\n");
}
void aggali(char *ali, int *cal){
	printf("nome alimento: ");
	scanf("%c",*ali);
	printf("quante calorie: ");
	scanf("%i",*cal);
}
void rimali(char *ali, int *cal){
	*ali='0';
	*cal=0;
}
void visali(char *ali, int *cal){
}
	

