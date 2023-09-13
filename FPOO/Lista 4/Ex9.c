#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int vetor[10], i;
	
	printf("Digite 10 números:\n");
	for(i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
	}
	
	float somaPar = 0, somaImpar = 0; 
	float mediaPar = 0, mediaImpar = 0;
	int par = 0, impar = 0;
	
	for(i = 0; i < 10; i++){
		if(vetor[i] % 2 == 1){
			somaImpar += vetor[i];
			impar++;
		}else{
			somaPar += vetor[i];
			par++;
		}
	}
	
	printf("___________________________________\n");
	
	mediaImpar = somaImpar / impar;
	mediaPar = somaPar / par;
	
	if(impar > 0){
	printf("\nNÚMEROS IMPARES:\n");
	printf("\nTotal de números Impares: %d", impar);
	printf("\nSoma dos números Impares: %.0f", somaImpar);
	printf("\nMédia dos números Impares: %.1f\n", mediaImpar);
	}else{
		printf("\nNÃO HÁ NENHUM NÚMERO IMPAR\n");
	}
	
	printf("___________________________________\n");
	
	if(par > 0){
	printf("\nNÚMEROS PARES:");
	printf("\nTotal de números Pares: %d", par);
	printf("\nSoma dos números Pares: %.0f", somaPar);
	printf("\nMédia dos números Pares: %.1f", mediaPar);
	}else{
		printf("\nNÃO HÁ NENHUM NÚMERO PAR");
	}
	
	printf("\n___________________________________\n");
	
	return 0;
}
