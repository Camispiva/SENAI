#include <stdio.h>
int main(){
	float preco;
	printf("Digite o valor do produto em R$:");
	scanf("%f",&preco);
	if(preco > 1000){
		preco = preco * 0.92;
	}
	printf("O preco final é: R$ %.2f", preco);
	return 0;
}
