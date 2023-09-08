#include <iostream>

//per modificare i propri parametri bisogna ricevere i loro indirizzi di memoria
void modificaINTOK(int *a);

int main(int argc, char** argv) {
	int a=123, *ptr;
	
	ptr=&a;
	printf("quanto vale in memoria RAM PTR %i\n",sizeof(ptr));
	printf("A vale %i e ha indirizzo %i\n",a,&a);
	printf("PTR vale %i e ha indirizzo %i\n",ptr,&ptr);
	
	printf("ptr punta al valore %i\n",*ptr); //accedo a cosa punta il puntatore
	
	*ptr=7; //cambio ili valore della zona puntata
	
	printf("A vale %i e ha indirizzo %i\n",a,&a);
	printf("PTR vale %i e ha indirizzo %i\n",ptr,&ptr);
	
	//devo passare l'indirizzo di memoria della variabile
	modificaINTOK(&a);
	printf("A vale %i\n",a);
	return 0;
}

void modificaINTOK(int *a){
	*a=90;
}
