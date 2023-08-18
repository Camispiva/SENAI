#include <stdio.h>
#include <locale.h>

//Se menor que R$ 1.000, aumento de 5%
//Se maior que R$ 1.000, aumento de 7%

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char mercadoria[15];
	float valor;
	float aumento;
	
	printf("Insira o nome da mercadoria: ");
		gets(mercadoria);
	printf("Insira o valor da mercadoria: R$  ");
		scanf("%f", &valor);
	
	if(valor < 1000){
		aumento = valor*0.05;
	}else{
		aumento = valor*0.07;
	}
	
	printf("\nMercadoria: %s", mercadoria);
	printf("\nNovo preço: %.2f", valor+aumento);
	
	return 0;
}
