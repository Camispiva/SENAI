#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c, d, e, f;
	int maior;
	
	printf("Insira 6 valores inteiros (dê espaços entre eles): ");
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	
	if(a>b && a>c && a>d && a>e && a>f){
		maior = a;
	}else if(b>c && b>d && b>e && b>f){
		maior = b;
	}else if(c>d && c>e && c>f){
		maior = c;
	}else if(d>e && d>f){
		maior = d;
	}else if(e>f){
		maior = e;
	}else{
		maior = f;
	}
	
	printf("\nO maior número da sequência é: %d", maior);
	
	return 0;
}
