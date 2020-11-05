#include <stdio.h>

int main(){
	int pares;	
	for(pares = 1; pares <=100; pares++){
		if(pares % 2 == 0){
			printf("%d\n", pares);
		}
	}
return 0;
}
