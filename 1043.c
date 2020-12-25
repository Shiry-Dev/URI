#include <stdio.h>

int main(){
	double num_1, num_2, num_3, perimetro, area;
	scanf("%lf %lf %lf", &num_1 ,&num_2, &num_3);
	
	perimetro = num_1 + num_2 + num_3;
	area = ((num_1 + num_2)*num_3)/2;
	
	if(num_1 < num_2 + num_3 && num_2 < num_1 + num_3 && num_3 < num_1 + num_2){
		printf("Perimetro = %0.1f\n", perimetro);
	}else{
		printf("Area = %0.1f\n", area);
	}
	

	
	return 0;
}
