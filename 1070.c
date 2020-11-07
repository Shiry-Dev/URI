#include <stdio.h>

int main(){
	int cont, entrada;
	scanf("%d", &entrada);
	if(entrada % 2 == 0){
		entrada += 1;
	}else{
		entrada = entrada;
	}
	printf("%d\n", entrada);
	for(cont = 1; cont <= 5; cont++){
		printf("%d\n", entrada += 2);
	}

return 0;
}
