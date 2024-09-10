#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[21];  
    int validade;
} Dados;

int compara(const void *a, const void *b) {
    Dados *p1 = (Dados *)a;
    Dados *p2 = (Dados *)b;
    
    if (p1->validade != p2->validade) {
        return p1->validade - p2->validade;
    }
    
    return strcmp(p1->nome, p2->nome);
}

int main() {
    int num;

    while (scanf("%d", &num) != EOF) {
        Dados carnes[num];

        for (int i = 0; i < num; i++) { 
            scanf("%s %d", carnes[i].nome, &carnes[i].validade);
        }
        
        qsort(carnes, num, sizeof(Dados), compara);

        for (int j = 0; j < num; j++) {
            printf("%s", carnes[j].nome);
            if (j < num - 1) {
                printf(" "); 
            }
        }
        printf("\n"); 
    }

    return 0;
}
