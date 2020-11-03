#include <stdio.h>
int main(){
	int num, hora; 
	float val, sal;
	scanf("%d %d %f", &num, &hora, &val);
	sal = (hora * val);

	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n", sal);
return 0;
}
