#include <stdio.h>
#include <locale.h>
int main(){	
	setlocale(LC_ALL, "");	
	int soma, i;	
	for(i = 1; i <= 100; i++){
		soma+=i;
	}
	printf("A soma de todos os números de 0 a 100 é = %d", soma);	
	return 0;
}
