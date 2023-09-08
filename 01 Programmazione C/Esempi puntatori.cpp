#include <stdio.h>
#define N 10

void modificaInt(int a){	
	printf("Sono MODIFICA-INT e ho ricevuto %i\n", a);
	a++;
	printf("Sono MODIFICA-INT e a vale %i\n", a);
}

void modificaChar(char c){
	printf("Sono MODIFICA-CHAR e ho ricevuto %c\n", c);
	c++;
	printf("Sono MODIFICA-CHAR e c vale %c\n", c);
}

void modificaStr(char vett[N]){
	printf("Sono MODIFICA-STR e ho ricevuto %s\n", vett);
	vett[0] = '!';
	printf("Sono MODIFICA-STR e vett vale %s\n", vett);
}

//Per modificare i propri parametri bisogna ricevere
//i loro indirizzi di memoria
void modificaIntOk(int *a){
	*a = 80;
}

void modificaCharOk(char *c){
	*c = 'k';
}

int main(){
	int n = 4;
	char k = 'j';
	char str[N] = "Alpini";
	
	modificaInt(n);
	modificaChar(k);
	modificaStr(str);
	
	printf("N vale %i\n", n);
	printf("K vale %c\n", k);
	printf("STR vale %s\n", str);
	
	printf("Dimensioni in RAM:\n");
	printf("%i %i %i\n", sizeof(n), sizeof(k), sizeof(str));
	
	printf("Indirizzi in RAM:\n");
	printf("%i %i %i\n", &n, &k, &str);
	
	int *ptrN;
	ptrN = &n;
	printf("n vale %i e ha indirizzo %i\n", n, &n);
	printf("ptrN vale %i e ha indirizzo %i\n", ptrN, &ptrN);

	printf("ptrN punta al valore %i\n", *ptrN);
	*ptrN = 7; //Cambio il valore della zona puntata
	printf("n vale %i e ha indirizzo %i\n", n, &n);
	printf("ptrN vale %i e ha indirizzo %i\n", ptrN, &ptrN);
	
	//Se la funzione riceve "un puntatore", passo
	//l'indirizzo di memoria della variabile (&)
	modificaIntOk(&n); 
	modificaCharOk(&k);
	
	printf("N vale %i\n", n);
	printf("K vale %c\n", k);
}








