#include <stdio.h>
int main(){
	//Declaração de variáveis
	int media;
	//Entrada de dados
	printf("Digite a media final do aluno de 0 a 100:");
	scanf("%d",&media);
	//Processamento e saída com condicional
	if(media >=50)
		printf("Aprovado");
	else
		printf("Reprovado");
	//Fim
	return 0;
}
