#include <stdio.>

int main(){
  float val;
  int cont ,positivos;
  positivos = 0;
  for(cont = 0; cont <= 5; cont++){
	  scanf("%f", &val);
	  if(val > 0){
		  positivos += 1;
	  }
  }
  printf("%d valores positivos\n", positivos);

return 0;
}
