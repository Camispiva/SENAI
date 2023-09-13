#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){	
	setlocale(LC_ALL, "");	
	char mercadoria[5][20];
	float preco[5];
	int i;	
	for(i = 0; i < 5; i++){
		printf("Nome da mercadoria: ");
		scanf("%s", &mercadoria[i]);
		printf("Preço da mercadoria: ");
		scanf("%f", &preco[i]);
		printf("\n");
	}	
	int j;
	float auxPreco;
	char auxMercadoria[20];	
	for(i = 0; i < 5; i++){
		for(j = i + 1; j < 5; j++){
			if(preco[i] < preco[j]){
				auxPreco = preco[i];
				strcpy(auxMercadoria, mercadoria[i]);
				preco[i] = preco[j];
				strcpy(mercadoria[i], mercadoria[j]);
				preco[j] = auxPreco;
				strcpy(mercadoria[j], auxMercadoria);
				
			}
		}
	}	
	printf("\nMercadoria\t\tPreco\n");
	printf("%s\t\t\t%.2f\n", mercadoria[0], preco[0]);
	printf("%s\t\t\t%.2f\n", mercadoria[4], preco[4]);
	
	return 0;
}
