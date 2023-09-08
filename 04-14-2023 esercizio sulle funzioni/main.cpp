#include <iostream>
#include <iostream>
#include <time.h>
#include <cstdlib>

void A(int a, int b);//RICEVO DUE NUMERI E STAMPO IL MAGGIORE
void B(float a,float b,float c,float d);//RICEVO 4 FLOAT E STAMPO LA MEDIA,
float C(float a,float b,float c,float d);//RESTITUISCO LA MEDIA 
void D();//RICEVE UN VETTORE DI 10 CARATTERI E MODIFICA IL PRIMO E ULTIMO CARATTERE
void E();//RICEVE UN VETTTORE DI 10 INTERI
void F();//RICEVE UN VETTORE DI 10 CARATTERI E LO CONVERTE IN MAIUSCOLO
void G();//RICEVE UN VETTORE DI DI 10 INTERI E RESTITUISCE IL VALORE DEL PIù PICCOLO TRA LORO

int main(int argc, char** argv) {
	int num[2];
	
	printf("dammi due numeri interi\n il primo e':");
	scanf("%i",&num[0])
	
	printf("il secondo e':");
	scanf("%i",&num[1]);
	
	A(num[0],num[1]);
	
	float sos[4],media=0;
	
	srand(time(NULL));
	printf("fra ti esco 4 float a caso:");
	
	for(int i=0;i<4;i++){
		
		sos[i]=rand();
		sos[i]=sos[i]/3;
		printf(" %f -",sos[i]);
	}
	
	B(sos[0],sos[1],sos[2],sos[3]);
	
	media= C(sos[0],sos[1],sos[2],sos[3]);
	printf("la media di sti quattro numeri che ho passato alla funzione e mi ha ritornato e' %f\n",media);
	
	return 0;
}

void A(int a, int b){//RICEVO DUE NUMERI E STAMPO IL MAGGIORE
	
	if(a>b){
		
		printf("il numero maggiore e' %i\n",a);
	}
	
	else{
		
		printf("il numero maggiore e' %i\n",b);
	}
}

void B(float a,float b,float c,float d){//RICEVO 4 FLOAT E STAMPO LA MEDIA,
	int med=0;
	
	med=(a+b+c+d);
	printf("\n numeri e' %f\n",med);
	
	
	med=med/4;
	printf("\n la media di sti quattro numeri e' %f\n",med);
	
}

float C(float a,float b,float c,float d){//RESTITUISCO LA MEDIA 
	int med=0;
	
	med+=a;
	med+=b;
	med+=c;
	med+=d;
	
	med=med/4;
	
	return med;
}

void D(){//RICEVE UN VETTORE DI 10 CARATTERI E MODIFICA IL PRIMO E ULTIMO CARATTERE

}

void E(){//RICEVE UN VETTTORE DI 10 INTERI

}


void F(){//RICEVE UN VETTORE DI 10 CARATTERI E LO CONVERTE IN MAIUSCOLO

}

void G(){//RICEVE UN VETTORE DI DI 10 INTERI E RESTITUISCE IL VALORE DEL PIù PICCOLO TRA LORO

}
