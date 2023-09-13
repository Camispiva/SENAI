#include <stdio.h>
#include <locale.h>
int main(){	
	setlocale(LC_ALL, "");	
	char mercadoria[10][20];
	float preco[10], percentualDes;
	int i;	
	for(i = 0; i < 10; i++){
		printf("Nome da mercadoria: ");
		scanf("%s", &mercadoria[i]);
		printf("Preço: ");
		scanf("%f", &preco[i]);
		printf("\n");
	}		
	printf("Digite o percentual de desconto: ");
	scanf("%f", &percentualDes);	
	float desconto[10], novoPreco[10];	
	for(i = 0; i < 10; i++){
		desconto[i] = preco[i] * (percentualDes/100);
		novoPreco[i] = preco[i] - desconto[i];
	}	
	printf("MercadoriaPreço s/DescontoDescontoPreço c/Desconto\n");	
	for(i = 0; i < 10; i++){
		printf("%sR$ %.2fR$ %.2fR$ %.2f", mercadoria[i], preco[i], desconto[i], novoPreco[i]);
		printf("\n");
	}	
	return 0;
}
