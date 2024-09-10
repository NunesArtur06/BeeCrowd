#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char palavra[51]; 
    int ordemOriginal; 
} Palavra;

int compara(const void *a, const void *b) {
    Palavra *p1 = (Palavra *)a;
    Palavra *p2 = (Palavra *)b;
    
    int len1 = strlen(p1->palavra);
    int len2 = strlen(p2->palavra);
    
    if (len1 != len2) {
        return len2 - len1; // Ordem decrescente de tamanho
    } else {
        return p1->ordemOriginal - p2->ordemOriginal;
    }
}

int main() {
    int N; 
    scanf("%d", &N);
    getchar(); 

    for (int i = 0; i < N; i++) {
        char linha[2550]; 
        fgets(linha, 2550, stdin);


        Palavra palavras[50];
        int qtdPalavras = 0;
        
        char *token = strtok(linha, " \n"); 
        while (token != NULL) {
            strcpy(palavras[qtdPalavras].palavra, token);
            palavras[qtdPalavras].ordemOriginal = qtdPalavras; 
            qtdPalavras++;
            token = strtok(NULL, " \n");
        }

        qsort(palavras, qtdPalavras, sizeof(Palavra), compara);

        for (int j = 0; j < qtdPalavras; j++) {
            printf("%s", palavras[j].palavra);
            if (j < qtdPalavras - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}