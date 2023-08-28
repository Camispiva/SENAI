#include <stdio.h>
#define MAX_CANDIDATES 10
#include <locale.h>

struct Candidate { char name[50]; int votes; };
int main() {
	setlocale(LC_ALL,"");
    char city[50]; int num, total = 0;
    struct Candidate c[MAX_CANDIDATES];
    printf("Cidade: "); scanf("%s", city);
    printf("Candidatos: "); scanf("%d", &num);
    int i = 0;
    while (i < num) {
        printf("Candidato %d: ", i + 1); scanf("%s %d", c[i].name, &c[i].votes);
        total += c[i].votes;
        i++;
    }
    int blank, null;
    printf("Votos brancos e nulos: "); scanf("%d %d", &blank, &null);
    total += blank + null;
    int winner = 0;
    i = 1;
    while (i < num) {
        if (c[i].votes > c[winner].votes) winner = i;
        i++;
    }
    printf("Vencedor: %s\n", c[winner].name);
    i = 0;
    while (i < num) {
        printf("Porcentagem para %s: %.2f%%\n", c[i].name, (float)c[i].votes / total * 100);
        i++;
    }
    return 0;
}

