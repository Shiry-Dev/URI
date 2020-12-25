#include <stdio.h>

int main(){
	int tabuada, i, resultado;
	scanf("%d", &tabuada);
	for(i = 1; i < 11; i++){
		resultado = i * tabuada;
		printf("%d x %d = %d\n", i, tabuada, resultado);
	}
	
	return 0;
}
