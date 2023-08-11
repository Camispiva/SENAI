#include <stdio.h>
int main(){
	int velocidade;
	int distancia;
	printf("informe a velocidade em km/h:");
	scanf("%d",&velocidade);
	printf("digite a distancia em km/h:");
	scanf("%d",&distancia);
	int tempo = velocidade / distancia;
	printf("o tempo em horas: %d",tempo);
	return 0;
}
