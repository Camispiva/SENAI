#include <stdio.h>

int main()
{
	char time[30];
	int v,e,d;
	
	printf("Digite o nome do time de futebol: ");
	gets(time);
	
	printf("Digite o numero de vitoria(s) do time: ");
	scanf("%d",&v);
	
	printf("Digite o numero de derrota(s) do time: ");
	scanf("%d",&d);
	
	printf("Digite o numero de empate(S) do time: ");
	scanf("%d",&e);
	
	printf("\n%s",time);
	printf("\n%d Vitoria(s)",v);
	printf("\n%d Derrota(s)",d);
	printf("\n%d Empate(s)",e);
	printf("\nTotal de Pontos: %d",(v*3)+e);
	
	return 0;
}
