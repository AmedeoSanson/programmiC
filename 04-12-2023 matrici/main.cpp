#include <iostream>
#include <stdio.h>

/*
creare una matrice di 10 X 5, Riempierla di zeri
*/

int main(int argc, char** argv) {
	int matrice[10][5];
	
	for(int rig=0;rig<10;rig++){
		for(int col=0;col<5;col++){
			matrice[rig][col]=0;
			printf("%i ",matrice[rig][col]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
