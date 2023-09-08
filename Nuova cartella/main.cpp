#include <iostream>
#include <time.h>
#include <cstdlib>

const int X=1,Y=10;

int main(int argc, char** argv) {
	
	int f[X][Y];
	
	
	
	for (int i=0;i<X;i++){
		
		for (int d=0;d<Y;d++){
			
			srand(time(NULL));
			
			if(d<(Y-1)){
			
				f[i][d]=rand();
				printf(" %i -",f[i][d]);
			}
			
			else{
				
				f[i][d]=rand();
				printf(" %i",f[i][d]);
			}
			
		}
		printf(" \n");
	}
	
	for (int i=0;i<X;i++){
		
		for(int h=0;h<Y;h++){
			
			for(int d=0;d<X;d++){
			
				for (int g=0;g<Y;g++){
				
					if(h!=g || i!=d){
						
						while(f[i][h]==f[d][g]){
							
							
							f[d][g]=rand();
							i=0;
						}
					}
				}	
			}
		}		
	}
	
	printf(" \n");
	
	for (int i=0;i<X;i++){
		
		for (int d=0;d<Y;d++){
		
			if(d<(Y-1)){
			
				f[i][d]=rand();
				printf(" %5i -",f[i][d]);
			}
			
			else{
				
				f[i][d]=rand();
				printf(" %5i",f[i][d]);
			}
		}
		
		printf(" \n");
	}
	
	return 0;
}
