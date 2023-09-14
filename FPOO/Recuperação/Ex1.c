#include <stdio.h>
int main(){
	int n[2], soma;
	printf("Digite o primeiro numero:");
	scanf("%d", &n[1]);
	printf("Digite o segundo numero:");
	scanf("%d", &n[2]);
	soma = n[1] + n[2];
	printf("A soma dos numeros e: %d", soma);
  	return 0;
}
