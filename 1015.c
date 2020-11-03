#include <stdio.h>
#include <math.h>

int main(){
	double x1, x2, y1, y2, p1, p2, dist;
	scanf("%lf %lf %lf %lf\n", &x1, &x2, &y1, &y2);
	p1 = x2 - x1;
	p2 = y2 - y1;
	dist = sqrt(pow(p1,2) + pow(p2,2));
	printf("%0.4lf\n",dist);

return 0;
}
