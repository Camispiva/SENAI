#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a, b;
	int maior, menor;
	
	printf("Digite 2 valores inteiros (d� espa�os entre eles): ");
	scanf("%d %d", &a, &b);
	
	if(a>b){
		maior = a;
		menor = b;
	}else{
		maior = b;
		menor = a;
	}
	
	printf("\nO maior n�mero �: %d", maior);
	printf("\nO menor n�mero �: %d", menor);
	
	return 0;
}
