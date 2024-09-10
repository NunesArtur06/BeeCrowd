#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct No {
    int altura;
    struct No *esquerda;
    struct No *direita;
} No;

No* criarNo(int altura) {
    No *novo = (No *)malloc(sizeof(No));
    novo->altura = altura;
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}

void inserirNo(No **raiz, int altura) {
    if (*raiz == NULL) {
        *raiz = criarNo(altura);
    } else if (altura < (*raiz)->altura) {
        inserirNo(&(*raiz)->esquerda, altura);
    } else {
        inserirNo(&(*raiz)->direita, altura);
    }
}

void travessiaPorNivel(No *raiz) {
    if (raiz == NULL) return;

    No *queue[250];
    int nivel = 0;
    int inicio = 0, fim = 0;

    queue[fim++] = raiz;
    
    while (inicio < fim) {
        int tamanhoNivel = fim - inicio;
        int menorAltura = INT_MAX;

        for (int i = 0; i < tamanhoNivel; i++) {
            No *noAtual = queue[inicio++];
            if (noAtual->altura < menorAltura) {
                menorAltura = noAtual->altura;
            }

            if (noAtual->esquerda != NULL) {
                queue[fim++] = noAtual->esquerda;
            }
            if (noAtual->direita != NULL) {
                queue[fim++] = noAtual->direita;
            }
        }

        printf("%d %d\n", nivel, menorAltura);
        nivel++;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int alturas[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &alturas[i]);
    }

    No *raiz = NULL;

    for (int i = 0; i < n; i++) {
        inserirNo(&raiz, alturas[i]);
    }

    travessiaPorNivel(raiz);

    return 0;
}
