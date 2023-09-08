#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeri[50] = {1,5,7,8,4,6,8,9,1,2,3,2,1,5,4,8,7,9,5,4,1,2,3,6,5,8,7,4,1,2,1,2,-1,4,5,4,9,7,8,7,4,5,1,20,3,6,3,9,5,2};

/*	
	int i,cin=0,con=0,cun=0;
	for(i=0;i<50;i++){
		
		if(numeri[i]==5){
			cin++;
		}
		else if(numeri[i]<=4){
			con++;
		}
		else if(numeri[i]>=6){
			cun++;
		}
	}
	printf("i 5 compaiono %i \n",cin);
	printf("i minori uguali a 4 compaiono %i \n",con);
	printf("i maggiorni uguali a 6 compaiono %i \n",cun);
	
*/

	int i,cin,cont=0;
	printf("digita il numero che vuoi trovare: ");
	scanf("%d", &cin);
	
	for(i=0;i<50;i++){
		if(numeri[i]==cin){
			cont++;
		}
	}
	
	printf("\nquel numero compare %i ",cont);
	printf("volte ");
	return 0;
}
