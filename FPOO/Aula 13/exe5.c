#include <stdio.h>

int main(){
	
	FILE *arquivo;
	char str[80];
	int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, media;
	
	
	arquivo = fopen ("dados.txt", "r");
	if(arquivo == NULL)
		printf("Erro, n�o foi possivel abrir o arquivo\n");
	else{
		while((fgets(str, 80, arquivo)) != NULL){
			media = strtok(str, " ");
		n1 = atoi(strtok(NULL," "));
		n2 = atoi(strtok(NULL," "));
		n3 = atoi(strtok(NULL," "));
		n4 = atoi(strtok(NULL," "));
		n5 = atoi(strtok(NULL," "));
		n6 = atoi(strtok(NULL," "));
		n7 = atoi(strtok(NULL," "));
		n8 = atoi(strtok(NULL," "));
		n9 = atoi(strtok(NULL," "));
		n10 = atoi(strtok(NULL," "));
	}
	media = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10)/10;
	printf("%d %d %d %d %d %d %d %d %d %d = %d", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, media);
	fclose(arquivo);
}
return 0;
}
