#include <stdio.h>

//Funzione che riceve un intero e stampa a video
//il numero successivo
void stampaSucc(int i){
	printf("%i", i+1);
}

void stampaMax(int a, int b){
	if(a > b){
		printf("%i", a);
	}else{
		printf("%i", b);
	}
}

void stampaMedia(float a, float b, float c, float d){
	float m = (a + b + c + d) / 4;
	printf("%f", m);
}

float calcolaMedia(float a, float b, float c, float d){
	float m = (a + b + c + d) / 4;
	return m;
}

void modificaVet(char v[10]){
	v[0] = 'k';
	v[9] = 'm';
}

void modificaPrimo(int v[10], int N){
	v[0] = N;
}

void convertiMaiusc(char s[10]){
	for(int i=0; i<10; i++){
		
		if(97 <= s[i] && s[i] <= 122){
			
			s[i] = s[i] - 32;		
		}
	}
}

int minimo(int v[10]){
	int min = v[0];
	
	for(int i=1; i<10; i++){
		if(v[i] < min){
			min = v[i];
		}
	}
	
	return min;
}

/* A. riceve due numeri e stampa il maggiore
B. riceve 4 float e ne stampa la media
C. ricive 4 float e restituisce (risponde) la media
D. riceve un vettore di 10 caratteri e modifica il primo e l'ultimo
E. riceve un vettore di 10 interi e un intero N e scrive N al posto
del primo elemento del vettore
F. riceve un vettore di 10 caratteri e lo converte in maiuscolo
G. riceve un vettore di 10 interi e restituisce il valore del più
piccolo tra loro
*/

int main(){
	//Chiamo la funzione
	stampaSucc(5);
	printf("\n");
	
	stampaMax(4, 9);
	printf("\n");
	
	stampaMedia(4.9, 3.3, 2.9, 0.1);
	printf("\n");
	
	float risposta = calcolaMedia(0.3, 4.4, 3.3, 6.6);
	printf("La risposta e': %f\n", risposta);

	
	char prova[10] = {'a', 'b', 'c', 'd','e','f','g','h','i','j'};
	printf("%s\n", prova);
	modificaVet(prova);
	printf("%s\n", prova);
	
	int numeri[10] = {3,5,4,6,5,4345,6,74,346,4};
	for(int i=0; i<10; i++){
		printf("%i ", numeri[i]);
	}
	printf("\n");
	
	modificaPrimo(numeri, 100);
	for(int i=0; i<10; i++){
		printf("%i ", numeri[i]);
	}
	printf("\n");
	
	convertiMaiusc(prova);
	printf("%s\n", prova);
	
	printf("%i", minimo(numeri));
}


