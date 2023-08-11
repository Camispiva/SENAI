#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	char cidade[15];
	int habitantes;
	int votos;
	
	printf("Digite o nome da cidade: ");
	gets(cidade);
	
	printf("Digite a quantidade de habitantes que há na cidade: ");
	scanf("%d",&habitantes);
	
	printf("Digite a quantidade de votos apurados: ");
	scanf("%d",&votos);
	
	printf("\n%d%% dos habitantes da cidade de %s participaram da última eleição.",votos*100/habitantes,cidade);
	
	return 0;
}
