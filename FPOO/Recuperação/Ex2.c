#include <stdio.h>
int main(){
	int num1, num2, num3;
	int media;
	printf("Digite tres valores inteiros:");
	scanf("%d %d %d", &num1, &num2, &num3);
	media = (num1 + num2 + num3) / 3;
	printf("O resultado da media e %d", media);
	return 0;
}
