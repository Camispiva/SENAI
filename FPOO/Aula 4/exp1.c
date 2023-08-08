#include <stdio.h>
int main (){
	int a, resto; //Declaração de variáveis
	//Entrada
	printf("Digite um numero inteiro: "); 
	scanf("%d",&a);
	//Processamento
	resto = a % 2; 
	//Saída processada
	if(resto){ 
		printf("impar");
	}else{
		printf("Par");
	}
	return 0;
}
