#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c;
	
	printf("Digite um valor para o lado A de um tri�ngulo: ");
	scanf("%f", &a);
	
	printf("Digite um valor para o lado B de um tri�ngulo: ");
	scanf("%f", &b);
	
	printf("Digite um valor para o lado C de um tri�ngulo: ");
	scanf("%f", &c);
	
	if(a==b && a==c && b==c){
		printf("\nEste � um tri�ngulo equil�tero");
	}else if(a!=b && a!=c && b!=c){
		printf("\nEste � um tri�ngulo escaleno");	
	}else{
		printf("\nEste � um tri�ngulo is�sceles");
	}
	
	return 0;
}
