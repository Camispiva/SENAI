#include <stdio.h>
#include <locale.h>

//Ler o pre�o de um produto
//Se maior que R$ 1.000, aplicar desconto de 8%

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float preco;
	float desconto = 0.08;
	
	printf("Digite o pre�o do produto: ");
	scanf("%f",&preco);
	
	if(preco > 1000){
		printf("\nO valor do produto com 8%% de desconto ser� R$ %.2f",preco-(desconto*preco));
	}
	else{
		printf("\nO valor do produto continua sendo R$%.2f",preco);
	}	
	
	return 0;
}
