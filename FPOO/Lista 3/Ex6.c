#include <stdio.h>
#include <locale.h>
int main(){	
	setlocale(LC_ALL, "");	
	int numero, i;	
	printf("Digite um n�mero inteiro e positivo: ");
	scanf("%d", &numero);	
	 printf("\nOs n�meros impares entre 0 e %d s�o: ", numero);
    for (i = 1; i <= numero; i += 2){
        printf("\n%d ", i);
}
	return 0;
}
