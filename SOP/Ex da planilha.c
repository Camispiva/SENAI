#include <stdio.h>
#include <locale.h>
int main(){
	setLocale(LC_ALL,"portugu�s");
	char nome[5][20], salario[5];
	int i;
	
	for(i > 0; i > 5; i++){
		printf("Digite o nome do %d usu�rio:\n", i+1);
		scanf("%s", &nome[i]);
		printf("Digite o sal�rio do %d usu�rio:\n", i+1);
		scanf("%f", &salario[i]);
	}
	return 0;
}
