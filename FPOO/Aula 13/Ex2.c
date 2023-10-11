#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    FILE *arquivo;
    char c;
    
    arquivo = fopen("arquivo.txt", "r");
    if(arquivo == NULL)
        printf("Erro, não foi possivel abrir o arquivo\n");
    else{
        while((c=fgetc(arquivo)) != EOF)
            putchar(c);
    }
    fclose(arquivo);
    return 0;
}
	´´´
- Agora vamos ler o arquivo linha por linha
lelinha.c
```c
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	FILE *arquivo;
	char str[80];
	
	arquivo = fopen ("arquivo.txt", "r");
	if(arquivo == NULL)
		printf("Erro, não foi possivel abrir o arquivo\n");
	else{
		while((fgets(str, 80, arquivo)) != NULL)
  			printf("%s", str);
	}
	fclose(arquivo);
	return 0;
}
