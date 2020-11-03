#include <stdio.h>
int main(){
	int dia, mes, ano, x;
	scanf("%d", &x);
	ano = x / 365;
	mes = (x % 365) / 30;
	dia = (x % 365) % 30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia); 
return 0;
}
