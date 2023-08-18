#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c;
	
	printf("Digite um valor para o lado A de um triângulo: ");
	scanf("%f", &a);
	
	printf("Digite um valor para o lado B de um triângulo: ");
	scanf("%f", &b);
	
	printf("Digite um valor para o lado C de um triângulo: ");
	scanf("%f", &c);
	
	if(a==b && a==c && b==c){
		printf("\nEste é um triângulo equilátero");
	}else if(a!=b && a!=c && b!=c){
		printf("\nEste é um triângulo escaleno");	
	}else{
		printf("\nEste é um triângulo isósceles");
	}
	
	return 0;
}
