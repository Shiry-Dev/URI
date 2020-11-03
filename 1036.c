#include <stdio.h>
#include <math.h>
int main(){
	double r1, r2, a, b, c , delt,
	scanf("%lf%lf%lf",&a,&b,&c);
	delt = ((b * b) - 4 * a * c);
	if(delt < 0 || a == 0){
	    printf("Impossível calcular\n");
	}else{
	    r1 = (-b + sqrt(delt))/(2 * a);
	    r2 = (-b - sqrt(delt))/(2 * a);
	    printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
	}
return 0;
}
