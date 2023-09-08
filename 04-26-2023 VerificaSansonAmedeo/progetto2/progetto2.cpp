#include <iostream>


int main(int argc, char** argv) {
	
	int num1,num2;
	
	
	
	do{
		printf("dammi un numero intero:");
		scanf("%i",&num1);
	
		printf("dammi un secondo numero intero:");
		scanf("%i",&num2);
		
	}while(num1>num2);
	
	for(int i=num1+1;i<num2;i++){
		printf("%i, ",i);
	}
	
	return 0;
}
