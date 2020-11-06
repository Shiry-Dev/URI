#include <stdio.h>

int main(){
	int cont, val, par, impar, pos, neg;
	par = 0; impar = 0; pos = 0; neg = 0;
	for(cont = 0; cont <= 4; cont++){
		scanf("%d",&val);
		if(val > 0){
			pos += 1;
		}else if(val < 0){
			neg += 1;
		}if(val % 2 == 0){
			par += 1;
		}else{
			impar += 1;
		}
	}
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", pos);
	printf("%d valor(es) negativo(s)\n", neg);

return 0;
}
