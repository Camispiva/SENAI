#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int num1, num2, num3, media;
	printf("Digite três numeros inteiros:");
	scanf("%d %d %d", &num1, &num2, &num3);
	media = (num1 + num2 + num3) / 3;
	printf("O resultado da media = %d, media");
	return 0;
}
