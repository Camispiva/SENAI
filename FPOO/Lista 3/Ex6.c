#include <stdio.h>
#include <locale.h>
int main(){	
	setlocale(LC_ALL, "");	
	int numero, i;	
	printf("Digite um número inteiro e positivo: ");
	scanf("%d", &numero);	
	 printf("\nOs números impares entre 0 e %d são: ", numero);
    for (i = 1; i <= numero; i += 2){
        printf("\n%d ", i);
}
	return 0;
}
