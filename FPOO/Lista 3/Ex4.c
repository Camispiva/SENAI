#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int i, c;
	printf("Digite 2 n�meros inteiros e diferentes separados por espa�os: ");
	scanf("%d %d", &i, &c);
	if(i < c){
		for(i; i <= c; i++){
			printf("%d ", i);
		}
	}else{
		for(i; i >= c; i--){
			printf("%d ", i);	
		}
	}
	return 0;
}
