#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int vetor[10], i;
	
	printf("Digite 10 n�meros:\n");
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
	printf("\nN�MEROS IMPARES:\n");
	printf("\nTotal de n�meros Impares: %d", impar);
	printf("\nSoma dos n�meros Impares: %.0f", somaImpar);
	printf("\nM�dia dos n�meros Impares: %.1f\n", mediaImpar);
	}else{
		printf("\nN�O H� NENHUM N�MERO IMPAR\n");
	}
	
	printf("___________________________________\n");
	
	if(par > 0){
	printf("\nN�MEROS PARES:");
	printf("\nTotal de n�meros Pares: %d", par);
	printf("\nSoma dos n�meros Pares: %.0f", somaPar);
	printf("\nM�dia dos n�meros Pares: %.1f", mediaPar);
	}else{
		printf("\nN�O H� NENHUM N�MERO PAR");
	}
	
	printf("\n___________________________________\n");
	
	return 0;
}
