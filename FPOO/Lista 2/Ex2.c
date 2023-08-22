#include <stdio.h>
#include <locale.h>

//Ler salário e quantidade de filhos
//Se salário for menor que R$ 2.000, receberá R$ 45 a mais por filho

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario, salarioFamilia, salarioFinal;
	int filhos;
	
	printf("Digite o valor do salário: ");
	scanf("%f", &salario);
	
	printf("Digite o número de filhos: ");
	scanf("%d", &filhos);
	
	if(salario < 2000){
		salarioFamilia = filhos*45;
		salarioFinal = salario + salarioFamilia;
		printf("\nO funcionário irá receber R$ %.2f", salarioFinal);
	} else{
		printf("\nO funcionário não irá receber salário família, portando ele irá receber R$ %.2f", salario);
	}
	
	return 0;
}
