#include <stdio.h>

int main(){
	int i, impar;
	scanf("%d", &i);
	//while( 1 < i < 1000){
		for(impar = 0; impar <= i; impar++){
			if(impar % 2 == 1){
				printf("%d\n", impar);
			}
		}
	//}
return 0;
}
