#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	
 //Declaração de variáveis
	char nome[15];
	float montante1, montante2, montante3, montante4, montante5;
	float comissao1, comissao2, comissao3, comissao4, comissao5;
	float valorTotal, comissaoTotal;
	
 //Entrada
	printf("Digite o nome do vendedor:");
	scanf("%s",&nome);
	printf("Digite os montantes das ultimas 5 vendas:");
	scanf("%f %f %f %f %f", &montante1, &montante2, &montante3, &montante4, &montante5);
	
 //Processamento
 		if(montante1 > 4000){
		comissao1 = montante1 * 0.06;
}	else{
		comissao1 = montante1 * 0.05;
}
	if(montante2 > 4000){
		comissao2 = montante2 * 0.06;
}	else{
		comissao2 = montante2* 0.05;
}
	if(montante3 > 4000){
		comissao3 = montante3 * 0.06;
}	else{
		comissao3 = montante3 * 0.05;
}
	if(montante4 > 4000){
		comissao4 = montante4 * 0.06;
}	else{
		comissao4 = montante4 * 0.05;
}
	if(montante5 > 4000){
		comissao5 = montante5 * 0.06;
}	else{
		comissao5 = montante5 * 0.05;
}

//Saída
	printf("funcionário %s\n",nome);
	printf("Vendas/Comissoes\n");
	printf("%.2f\t%.2f\n", montante1, comissao1);
	printf("%.2f\t%.2f\n", montante2, comissao2);
	printf("%.2f\t%.2f\n", montante3, comissao3);
	printf("%.2f\t%.2f\n", montante4, comissao4);
	printf("%.2f\t%.2f\n", montante5, comissao5);
	printf("%.2f\t%.2f\n", valorTotal, comissaoTotal);
	return 0;
}
