#include <stdio.h>
int main(){
	double x;
	scanf("%lf",&x);
	if(x < 0 || x > 100.0){
		printf("Fora de intervalo\n");
	}else if(x <= 25.0){
		printf("Intervalo [0,25]\n");
	}else if(x <= 50){
		printf("Intervalo (25,50]\n");
	}else if(x <= 75.0){
		printf("Intervalo (50,75]\n");
	}else if(x <= 100.0){
		printf("Intervalo (75,100]\n");
	}else{
		
	}


return 0;
}
