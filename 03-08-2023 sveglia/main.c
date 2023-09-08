#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ore,ore1,min,min1,sec,sec1,orafin,orafin1;
	int ores,ores1,mins,mins1;
	printf("Ao che ore sono minchione\n dammi l'orario in 24h");
	
	printf("\n dammi le ore: ");
	scanf("%i",&ore);
	
		while(ore>23){
		printf("\n sei stupido non esiste quell'ora dammi le ore giuste: ");
		scanf("%i",&ore);
	}
	
	printf("\n dammi i min: ");
	scanf("%i",&min);
				
	while(min>59){
		printf("\n sei stupido non esiste quel min dammi i min giusti: ");
		scanf("%i",&min);
	}	
	
	printf("\n dammi i sec: ");
	scanf("%i",&sec);	
	
	while(sec>59){
		printf("\n sei stupido non esiste quel sec dammi i sec giusti: ");
		scanf("%i",&sec);
	}			
	
	printf("Ao a che ore voi che suoni la sveglia\n dammi l'orario in 24h");
	
	printf("\n dammi le ore: ");
	scanf("%i",&ore1);
	
	while(ore1>23){
		printf("\n sei stupido non esiste quell'ora dammi le ore giuste: ");
		scanf("%i",&ore1);
	}
	
	printf("\n dammi i min: ");
	scanf("%i",&min1);
				
	while(min1>59){
		printf("\n sei stupido non esiste quel min dammi i min giusti: ");
		scanf("%i",&min1);
	}	
	
	printf("\n dammi i sec: ");
	scanf("%i",&sec1);	
	
	while(sec1>59){
		printf("\n sei stupido non esiste quel sec dammi i sec giusti: ");
		scanf("%i",&sec1);
	}							
					
	ores=ore*3600;
	mins=min*60;
	
	ores1=ore1*3600;
	mins1=min1*60;
	
	orafin=(-ores-mins-sec+ores1+mins1+sec1);
					
	printf("\n va bene bro la sveglia suonera' tra: %i",orafin);
				
	return 0;
}
