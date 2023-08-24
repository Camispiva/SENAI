#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int num;
	int i;
	printf("Digite um número inteiro e positivo: ");
	scanf("%d", &num);
	for(i = 0; i <= num; i++){
		printf("%d ", i);
	}
	return 0;
}
