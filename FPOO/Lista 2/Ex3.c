#include <stdio.h>
#include <locale.h>

//Se menor ou igual R$ 1.212,00, descontar 7,5%
//Se menor ou igual R$ 2.427,35, descontar 9%
//Se menor ou igual R$ 3.641,03, descontar 12%
//Se menor ou igual R$ 7.087,22, descontar 14%
//Se maior R$ 7.087,22, descontar 14% de R$ 7.087,22

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salario;
	float desconto;
	
	printf("Digite o valor do seu salário: ");
		scanf("%f", &salario);
	
	if(salario<=1212.00){
		desconto=salario*0.075;
	}else if(salario<=2427.35){
		desconto=salario*0.09;
	}else if(salario<=3641.03){
		desconto=salario*0.12;
	}else if(salario<=7087.22){
		desconto=salario*0.14;
	}else desconto=7087.22*0.14;
	
	printf("\nO valor do desconto será de R$ %.2f", desconto);
	printf("\nO valor do salário líquido será de R$ %.2f", salario-desconto);
	
	return 0;
}
