#include <stdio.h>

int main(){
	float val, total, media;
	int cont, totalnum;
	totalnum = 0; total = 0; media = 0;
	for(cont = 0; cont <= 5; cont++){
		scanf("%f", &val);
		if(val > 0){
			totalnum += 1;
			total += val;
		}
	}
	media = total / totalnum;
	printf("%d valores positivos\n", totalnum);
	printf("%.1f\n", media);
  
return 0;
}
