#include <stdio.>
int main(){
	int quant;
	float cod,total;
	scanf("%f %d", &cod, &quant);
	if(cod == 1){
		cod = 4.00;
	}else if(cod == 2){
		cod = 4.50;
	}else if(cod == 3){
		cod = 5.00;
	}else if(cod == 4){
		cod = 2.00;
	}else if(cod == 5){
		cod = 1.50;
	}
	total = cod * quant; 
	printf("Total: R$ %.2f\n", total);
return 0;
}
