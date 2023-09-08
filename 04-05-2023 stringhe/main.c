#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nome[30]="Amedeo",cognome[30];
	int lun;
	
	scanf("%s",cognome);
	
	printf("fra ti chiami: %s %s\n",nome,cognome);
	
	printf("fra le tue iniziali sono: %c e %c\n",nome[0],cognome[0]);
	
	lun = strlen(nome);
	printf("fra il tuo nome e' lungo: %i\n",lun);
	
	lun = strlen(cognome);
	printf("fra il tuo cognome e' lungo: %i\n",lun);
	
	return 0;
}
