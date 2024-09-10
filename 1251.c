#include <stdio.h>
#include <string.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void trocaChar(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int *contagem, char *caracteres, int n) {
    if (n < 1) return;

    for (int i = 0; i < n - 1; i++) {
        if (contagem[i] > contagem[i + 1] || 
           (contagem[i] == contagem[i + 1] && caracteres[i] < caracteres[i + 1])) {
            troca(&contagem[i], &contagem[i + 1]);
            trocaChar(&caracteres[i], &caracteres[i + 1]);
        }
    }
    bubblesort(contagem, caracteres, n - 1);
}

int main() {
    char string[1001];
    int first_output = 1;

    while (scanf("%s", string) != EOF) {
        int n = strlen(string);

        char caracteres[1001];
        int contagem[1001];
        int tamanho = 0;

        // Conta as frequências de cada caractere
        for (int i = 0; i < n; i++) {
            int encontrado = 0;
            for (int j = 0; j < tamanho; j++) {
                if (caracteres[j] == string[i]) {
                    contagem[j]++;
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                caracteres[tamanho] = string[i];
                contagem[tamanho] = 1;
                tamanho++;
            }
        }

        bubblesort(contagem, caracteres, tamanho);

        // Imprime a linha em branco entre diferentes casos de teste
        if (!first_output) {
            printf("\n");
        }
        first_output = 0;

        // Imprime os valores ASCII e suas frequências
        for (int i = 0; i < tamanho; i++) {
            printf("%d %d\n", (int)caracteres[i], contagem[i]);
        }
    }

    return 0;
}
