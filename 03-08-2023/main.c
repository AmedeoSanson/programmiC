#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b,r,t;
	
	//bool d=true;
	char c;
	printf("ciao babbi\n %i", a);
	
	printf("\n %c", c);
	printf("\n %f", c);
	printf("\n %f", c);
	
	printf("gabibbo faccio la matematica\n dammi un numero\n");
	scanf("%i",&a);
	printf("\n fratmo dammi un altro numero\n");
	scanf("%i",&b);
	printf(" che vuoi fa' per somma digita 1 \n		sottrazione 2 \n	moltiplicazione 3\n		divisione 4 \n");
	
	scanf("%i",&t);
	
	if(t==1){
		printf("sommo");
		r=(a+b);
	}
	else if(t==2){
		printf("sottraggo");
		r=(a-b);
	}
	else if(t==3){
		printf("moltiplico");
		r=(a*b);
	}
	else if(t==4){
		printf("divido");
		r=(a/b);
	}
	else{
		printf("hai la mamma zoccolona per questo oltraggio mi suicido");
		return 0;
	}
	
	printf("\n troppo facile %i",r);
		
	return 0;
}
