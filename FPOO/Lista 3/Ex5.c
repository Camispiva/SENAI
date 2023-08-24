#include <stdio.h>
#include <locale.h>
int main(){	
	setlocale(LC_ALL, "");	
	int numero, i;	
	printf("Digite um número inteiro e positivo: ");
	scanf("%d", &numero);	
	for(i = 0; i <= numero; i+=2){
		printf("%d ", i);
	}	
	return 0;
}
