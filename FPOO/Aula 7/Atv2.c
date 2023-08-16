#include <stdio.h>
int main(){
	char nome[20];
	float peso, altura, imc, sair;
	
	do{
		printf("Digite seu nome:");
		scanf("%s",&nome);
		printf("Digite seu peso em kg:");
		scanf("%f",&peso);
		printf("Digite sua altura em metros:");
		scanf("%f",&altura);
		imc = peso / (altura * altura);
		
		printf("O imc = %.2f\n",imc);
		
		if(imc <= 18.5){
			printf("abaixo do peso");
		}else if(imc >= 18.6 && imc < 24.9){
			printf("Peso ideal");
		}else if(imc >= 25.0 && imc < 29.9){
			printf("Levemente acima do peso");
		}else if(imc >= 30.0 && imc < 34.9){
			printf("Obesidade grau 1");
		}else if (imc >= 35.0 && imc < 39.9){
			printf("Obesidade grau 2");
		}else if (imc >= 40.0){
			printf("Acima do peso");
		}
		
		printf("\n\nDigite 1 para continuar ou 0 para sair: ");
		scanf("%d",&sair);
	}while(sair);
	return 0;
}
