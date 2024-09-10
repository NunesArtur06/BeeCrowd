#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    char cor[20];
    char tamanho;
} Camisa;

int compara(const void *a, const void *b) {
    Camisa *p1 = (Camisa *)a;
    Camisa *p2 = (Camisa *)b;

    
    int cmpCor = strcmp(p1->cor, p2->cor);
    if (cmpCor != 0) {
        return cmpCor;
    }

   
    if (p1->tamanho != p2->tamanho) {
        if (p1->tamanho == 'P') return -1;
        if (p2->tamanho == 'P') return 1;
        if (p1->tamanho == 'M') return -1;
        if (p2->tamanho == 'M') return 1;
    }

    
    return strcmp(p1->nome, p2->nome);
}

int main() {
    int num;
    int isFirst = 1; 

    while (scanf("%d", &num) && num != 0) {
        Camisa camisas[num];

        if (!isFirst) {
            printf("\n"); 
        }
        isFirst = 0;

        for (int i = 0; i < num; i++) {
            getchar(); 
            scanf("%s %c", camisas[i].cor, &camisas[i].tamanho);
            fgets(camisas[i].nome, sizeof(camisas[i].nome), stdin);
            camisas[i].nome[strcspn(camisas[i].nome, "\n")] = '\0'; 
        }

        qsort(camisas, num, sizeof(Camisa), compara);

        for (int i = 0; i < num; i++) {
            printf("%s %c %s\n", camisas[i].cor, camisas[i].tamanho, camisas[i].nome);
        }
    }

    return 0;
}
