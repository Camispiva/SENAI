#include <stdio.h>
#include <locale.h>

//Ler sal�rio e quantidade de filhos
//Se sal�rio for menor que R$ 2.000, receber� R$ 45 a mais por filho

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario, salarioFamilia, salarioFinal;
	int filhos;
	
	printf("Digite o valor do sal�rio: ");
	scanf("%f", &salario);
	
	printf("Digite o n�mero de filhos: ");
	scanf("%d", &filhos);
	
	if(salario < 2000){
		salarioFamilia = filhos*45;
		salarioFinal = salario + salarioFamilia;
		printf("\nO funcion�rio ir� receber R$ %.2f", salarioFinal);
	} else{
		printf("\nO funcion�rio n�o ir� receber sal�rio fam�lia, portando ele ir� receber R$ %.2f", salario);
	}
	
	return 0;
}
