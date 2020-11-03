#include <stdio.h>
int main(){
	/*float media, a, b, c;
	scanf("%f\n", &a);
	scanf("%f\n", &b);
	scanf("%f", &c);
	media = (2*a + 3*b + 5*c)/ 10;
	printf("MEDIA = %0.1lf",media);*/
	double A,B,C;
	scanf("%lf %lf %lf\n", &A, &B, &C);
	printf("MEDIA = %.1lf\n", (2*A + 3*B + 5*C)/10);
	
return 0;
}
