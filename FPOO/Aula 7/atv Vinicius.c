#include <stdio.h>
int main (){
	char nome[10];
	int i;
	int dias;
	float somaa, somab;
	int decisao = 1;
	while (decisao) {
		somaa = 0;
		somab = 0;
		
		printf("Informe seu nome: ");
		scanf("%s",&nome);
		printf("Informe a quantidade de dias: ");
		scanf("%d", &dias);
		printf("\n");
		
		float a[dias];
		float b[dias];
		
		for(i = 0; i < dias; i++){
			printf("Informe a pressao sistolica anotada pela semana: ");
			scanf("%f",&a[i]);
			printf("Informe a pressao diastolica anotada pela semana: ");
			scanf("%f",&b[i]);
			printf("\n");
		}
		for(i = 0; i < dias; i++) {
			somaa += a[i];
			somab += b[i];
		}
		somaa /= dias;
		somab /= dias;
		
		printf("Sua pressao media sis e dia e igual a %.2f %.2f \n",somaa, somab);
		printf("Deseja continuar usando o programa? 1 para sim e 0 para nao: ");
		scanf("%d", &decisao);
	}
	return 0;
}
