#include <stdio.h>
#include <locale.h>
int main(){	
	setlocale(LC_ALL, "");	
	int vetor1[5], vetor2[5], i;	
	printf("Digite 5 n�meros para a 1� sequ�ncia: ");
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor1[i]);
	}	
	printf("__________________________________________________\n");
	
	printf("\nDigite 5 n�meros para a 2� sequ�ncia: ");
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor2[i]);
	}
	printf("__________________________________________________\n");
	
	int somaVetores[5];	
	for(i = 0; i < 5; i++){
		somaVetores[i] = vetor1[i] + vetor2[4 -i];
	}
	
	printf("\nSoma da 1� sequ�ncia com o inverso da 2� sequ�ncia\n");
	for(i = 0; i < 5; i++){
		printf("%d ", somaVetores[i]);
	}	
	return 0;
}
