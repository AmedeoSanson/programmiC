#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int andata=1, val;
	
	while(andata) {
		
		
		printf("Scegli una voce:\n 1- SALUTA\n 2- STARNUTISCI\n 3- ESCI\n");
		
		scanf("%i", &val);
		
		if(val==1)
			printf("CIAO NEG..\n");
		
		else if(val==2)	
			printf("babbibbp\n");
		
		else if(val==3){
			printf("ma va va\n");
			andata=0;
		}
			
		else
			printf("MA SITU SCEMO\n");
			
	}
	
	
	return 0;
}
