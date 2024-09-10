#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NoLista {
    char nome[21];
    struct NoLista* proximo;
} NoLista;

int proximaPalavra(char* texto, char* palavra, int n);

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        int qtd = 0;
        char texto[20001];
        fgets(texto, 20001, stdin);
        texto[strcspn(texto, "\n")] = '\0';

        char palavra[21];
        int pos = proximaPalavra(texto, palavra, 0);
        if (pos == 0) {
            printf("%s\n", palavra);
        }

        NoLista* lista = malloc(sizeof(NoLista));
        strcpy(lista->nome, palavra);
        lista->proximo = NULL;
        qtd++;

        while (1) {
            pos = proximaPalavra(texto, palavra, pos + 1);

            NoLista* atual = lista;
            int existe = 0;
            while (atual != NULL) {
                if (strcmp(atual->nome, palavra) == 0) {
                    existe = 1;
                }
                if (atual->proximo == NULL) {
                    break;
                }
                atual = atual->proximo;
            }

            if (existe == 0) {
                NoLista* novoNo = malloc(sizeof(NoLista));
                strcpy(novoNo->nome, palavra);
                novoNo->proximo = NULL;
                atual->proximo = novoNo;
                qtd++;
            }

            if (pos == 0) {
                break;
            }
        }

        NoLista* p1 = lista;
        for (int i = 0; i < qtd; i++) {
            NoLista* p2 = p1->proximo;
            for (int j = i + 1; j < qtd; j++) {
                if (strcmp(p1->nome, p2->nome) > 0) {
                    char tmp[21];
                    strcpy(tmp, p1->nome);
                    strcpy(p1->nome, p2->nome);
                    strcpy(p2->nome, tmp);
                }
                p2 = p2->proximo;
            }
            printf("%s", p1->nome);
            p1 = p1->proximo;
            if (i != qtd - 1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}

int proximaPalavra(char* texto, char* palavra, int n) {
    int i = 0;
    while (texto[n] != '\0') {
        if (texto[n] == ' ') {
            palavra[i] = '\0';
            return n;
        }
        palavra[i] = texto[n];
        n++;
        i++;
    }
    palavra[i] = '\0';
    return 0;
}
