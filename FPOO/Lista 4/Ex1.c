#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL, "");
	char nome[5][20];
	float salario[5];
	float reajuste;
	int i;
	for(i = 0; i < 5; i++){
		printf("\nDigite o nome do funcion�rio: ");
		scanf("%s", &nome[i]);
		printf("Digite o sal�rio do funcion�rio: ");
		scanf("%f", &salario[i]);
	}	
	printf("_____________________________________");
	printf("\nDigite o percentual de aumento: ");
	scanf("%f", &reajuste);
	reajuste = (reajuste / 100) + 1;	
	printf("_____________________________________");
	printf("\nFuncion�rio\tSal�rio Rejustado");	
	for(i = 0; i < 5; i++){
		printf("\n%s\t\tR$ %.2f", nome[i], salario[i] * reajuste);
	}	
	return 0;
}
