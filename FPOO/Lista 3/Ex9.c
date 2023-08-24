#include <stdio.h>
#include <locale.h>
int main(){	
	setlocale(LC_ALL, "");	
	int numero, i;	
	printf("Digite um número inteiro e positivo: ");
	scanf("%d", &numero);	
	for(i = 0; i <= 10; i++){
		printf("\n%d * %d = %d", numero, i, numero * i);
	}	
	return 0;
}
