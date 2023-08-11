#include <stdio.h>
int main(){
	float a, b, c;
	printf("Digite o valor do lado a:");
	scanf("%f",&a);
	printf("Digite o valor do lado b:");
	scanf("%f",&b);
	printf("Digite o valor do lado c:");
	scanf("%f",&c);
	if(a!= b&& a!= c && b!= c){
		printf("Triangulo escaleno");
	}else if(a==b && a == c){
		printf("Triangulo equilatero");
	}else{
		printf("Triangulo isoceles");
	}
	return 0;
}
