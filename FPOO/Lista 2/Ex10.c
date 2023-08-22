#include <stdio.h>
#include <locale.h>

//Calcular média de 3 notas
//Aprovado se maior ou igual a 6
//Recuperação se menor que 6 e maior ou igual a 4
//Reprovado se menor que 4

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int nota1, nota2, nota3;
	int media;
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%d", &nota1);
	printf("Digite a segunda nota do aluno: ");
	scanf("%d", &nota2);
	printf("Digite a terceira nota do aluno: ");
	scanf("%d", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	if(media >= 6){
		printf("\nO aluno está aprovado");
	}else if(media < 6 && media >=4){
		printf("\nO aluno está de recuperação");
	}else{
		printf("\nO aluno está reprovado");
	}
	
	return 0;
}
