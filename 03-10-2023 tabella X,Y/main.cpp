#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char X='x', O='O';
	int grandezza=0,S=0,asseY,asseX;


	scanf("%i",&grandezza);
	
	printf("%I",grandezza);
	printf("O\n");
	
	for( asseY=0;asseY<grandezza;asseY++){
		
		for( asseX=0;asseX<grandezza;asseX++){
			if(asseY==0){
				printf("%i",S);
				S++;
			}
			else if ((asseY/2)==true){
				printf("X");
			}
			else if ((asseY/2)==false){
				printf("O");
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
