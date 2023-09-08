#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ALTEZZA 20
#define LARGHEZZA 20

typedef struct personaggio{
	char simbolo;
	int x,y;
	int vite;
}personaggio_t;

void resetCampo(char m[ALTEZZA][LARGHEZZA]);

void stampaCampo(char m[ALTEZZA][LARGHEZZA], personaggio_t *p1, personaggio_t *p2);

int main(int argc, char** argv) {
	
	char campo[ALTEZZA][LARGHEZZA];
	
	resetCampo(campo);
		
	personaggio_t buono;
	buono.simbolo='S';
	buono.x=10;
	buono.y=10;
	buono.vite=1;
	
	personaggio_t nemico;
	nemico.simbolo='X';
	nemico.x=15;
	nemico.y=15;
	nemico.vite=1;
	
	while(buono.vite>0){
		system("cls");
		stampaCampo(campo,&buono,&nemico);
		
		
		
	}
	
	return 0;
}

void resetCampo(char m[ALTEZZA][LARGHEZZA]){
	
	for(int i=0;i<ALTEZZA;i++){
		
		for(int c=0;c<LARGHEZZA;c++){
			m[i][c]='-';
		}
	}
}

void stampaCampo(char m[ALTEZZA][LARGHEZZA], personaggio_t *p1, personaggio_t *p2){
    //stampa linea in alto
    printf("+");
    for(int i = 0; i < LARGHEZZA; i++){
        printf("-");
    }
    printf("+\n");
    //stampa parte centrale del campo
    for(int r = 0; r < ALTEZZA; r++){
        printf("|");
        for(int c = 0; c < LARGHEZZA; c++){
            if(r == p1->y && c == p1->x){ //verifico se la x e la y del primo personaggio si trovano in quella posizione
                printf("%c", p1->simbolo);
            }else if(r == p2->y && c == p2->x){ //verifico se la x e la y del secondo personaggio si trovano in quella posizione
                printf("%c", p2->simbolo);
            }else{ //se nessuno dei due personaggi si trova in quel punto allora stampo uno spazio
                printf("%c", m[r][c]);
            }
        }
        printf("|\n");
    }
    //stampa linea in basso
    printf("+");
    for(int i = 0; i < LARGHEZZA; i++){
        printf("-");
    }
    printf("+");
}
