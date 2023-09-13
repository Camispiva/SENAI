#include <stdio.h>
#include <locale.h>
int main(){	
	setlocale(LC_ALL, "");	
	char cidade[5][20];
	int totalE[5], votosApur[5];
	int i;
	for(i = 0; i < 5; i++){
		printf("Nome da cidade: ");
		scanf("%s", &cidade[i]);
		printf("Total de eleitores: ");
		scanf("%d", &totalE[i]);
		printf("Votos apurados: ");
		scanf("%d", &votosApur[i]);
		printf("\n");
	}		
	float porcentagemPart[5];	
	for(i = 0; i < 5; i++){
		porcentagemPart[i] = (votosApur[i] * 100) / totalE[i];
	}	
	printf("Cidade\t\t%% de participação\n");
	for(i = 0; i < 5; i++){
		printf("%s\t\t%.2f%%\n", cidade[i], porcentagemPart[i]);
	}	
	return 0;
}
