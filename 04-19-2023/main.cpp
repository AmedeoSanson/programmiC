#include <iostream>
#define N 10

void modificaInt(int a);

void modificaChar(char c);

void modifixaStr( char vett[N]);

int main(int argc, char** argv) {
	
	int n=4;
	char k='r';
	char str[N]="Alpini";
	
	modificaInt(n);
	modificaChar(k);
	modifixaStr(str);
	
	printf("N vale %i\nK vale %c\nSTR vale %s\n",n,k,str);
	
	printf("le dimensioni in ram di N: %i K: %i STR: %i\n",sizeof(n),sizeof(k),sizeof(str));
	
	printf("indirizzi in RAM N%i, K%i, STR%i\n",&n,&k,&str);
	
	return 0;
}

void modificaInt(int a){
	
	printf("sono MODIFICA-INT e ho ricevuto %i\n",a);
	a++;
	printf("sono MODIFICA-INT e a ricevuto %i\n",a);
}

void modificaChar(char c){
	
	printf("sono MODIFICA-CHAR e ho ricevuto %c\n",c);
	c++;
	printf("sono MODIFICA-CHAR e c ricevuto %c\n",c);
}

void modifixaStr( char vett[N]){
	
	printf("sono MODIFICA-STR e ho ricevuto %s\n",vett);
	vett[0]+=1;
	printf("sono MODIFICA-STR e vett ricevuto %s\n",vett);
}
