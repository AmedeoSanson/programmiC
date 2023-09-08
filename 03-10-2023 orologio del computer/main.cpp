#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include<unistd.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	while (1){
		
		time_t mytime = time(NULL);
	    char * time_str = ctime(&mytime);
	    time_str[strlen(time_str)-1] = '\0';
	    printf("Current Time : %s\n", time_str);
		
		Sleep(1000);
		
		 system("cls");		 
	}
	
    
    

	return 0;
}
