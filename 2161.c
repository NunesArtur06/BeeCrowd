#include <stdio.h>

int funcao(int h, int *resultados, int *indice) {
    int maior = h;
    
    while (h != 1) {
        if (h % 2 == 0) { // Se h é par
            h = h / 2;
        } else { // Se h é ímpar
            h = 3 * h + 1;
        }
        resultados[*indice] = h;
        (*indice)++;
        if (h > maior) {
            maior = h;
        }
    }
    
    return maior;
}

int main() {
    int h;
    
    while (scanf("%d", &h) && h != 0) {
        int resultados[1000];
        int indice = 0;
        int maior = funcao(h, resultados, &indice);
        
        printf("%d\n", maior);
    }
    
    return 0;
}
