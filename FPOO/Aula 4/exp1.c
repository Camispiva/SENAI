#include <stdio.h>
int main (){
	int a, resto; //Declara��o de vari�veis
	//Entrada
	printf("Digite um numero inteiro: "); 
	scanf("%d",&a);
	//Processamento
	resto = a % 2; 
	//Sa�da processada
	if(resto){ 
		printf("impar");
	}else{
		printf("Par");
	}
	return 0;
}
