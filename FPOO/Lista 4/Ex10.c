#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");	
	int vetor[6], i, aux, j;	
	printf("Digite 6 n�meros:\n");
	for(i = 0; i < 6; i++){
		scanf("%d", &vetor[i]);
	}	
	for(i = 0; i < 3; i++){
		j = 5 - i;
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
	}	
	printf("\nN�meros em posi��es invertidas: ");
	for(i = 0; i < 6; i++){
		printf("%d ", vetor[i]);
	}	
	return 0;
}
