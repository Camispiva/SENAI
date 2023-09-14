#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	char nome [5][10];
	float n1[5], n2[5], media[5];
	int i;
	
	printf("Digite o nome e a nota(0 a 10) dos %d alunos:\n", i + 1);
	for (i = 0; i < 5; i ++)
		scanf("%s %f %f", &nome[i], &n1[5], &n2[5]);
		media[i] = (n1[i] + n2[i]) / 2
	}
	
	for ( i = 0; i < 5; i ++){
		printf("media = 0.1f do aluno %s\n", media[i], nome[i]);
		if(media [i] >= 0)
			printf("%s %.1f Aprovado\n", nomes[i], media[i]);
		else
			printf("%s %.1f Reprovado\n", nomes[i], media[i]);
 	}
 	return 0;
