#include <stdio.h>
#include <locale.h>
int main(){	
	setlocale(LC_ALL, "");
	int n, fatorial;	
	printf("Digite um n�mero inteiro e positivo: ");
	scanf("%d", &n);	
	int aux = n;	
	for(fatorial = 1; n > 1; n--){
		fatorial *= n;
	}	
	printf("O fatorial de %d � = %d", aux, fat);	
	return 0;
}
