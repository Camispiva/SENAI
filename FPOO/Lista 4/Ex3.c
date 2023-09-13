#include <stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");	
	char mercadoria[5][20];
	float preco[5];
	int i;	
	for(i = 0; i < 5; i++){
		printf("\nNome da mercadoria: ");
		scanf("%s", &mercadoria[i]);
		printf("Preço da mercadoria: ");
		scanf("%f", &preco[i]);
	}	
	float precoReajustado[5];	
	for(i = 0; i < 5; i++){
		if(preco < 1000){
			precoReajustado[i] = preco[i] * 1.05;
		}else{
			precoReajustado[i] = preco[i] * 1.07;
		}
	}	
	printf("Mercadoria\t\tPreço\n");
	
	for(i = 0; i < 5; i++){
		printf("%s\t\t\t%.2f\n", mercadoria[i], precoReajustado[i]);
	}	
	return 0;
}
