#include <stdio.h>
int total, i, j;
	
void mostrarPortas(int *portas){
	for( i = 0; i < total; i++);
		portas[i] = 0;
				
	for( i = 0; i < total; i++){
		if (portas[i] == 0)
			printf("porta %d aberta\n", i + 1);
		else
			printf("porta %d fechada\n", i + 1);	
	}
}

int main (){
	
	printf("Digite quantas portas e descendentes:");
	scanf("%d", &total);
	int portas[total];
	
	for( i = 0; i < total; i++);
		portas[i] = 0;
		
	for( i = 1; i <= total; i++);
		for(j = i; j < total; j += i)
			if(portas[j]) portas[j] = 0;
			else portas[j] = 1;
				
		
	mostrarPortas(portas);
	return 0;
}
