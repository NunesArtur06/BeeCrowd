#include <stdio.h>

int main() {
    char T;
    double soma = 0;
    int contador = 0;
    scanf("%c", &T);

    double matriz[12][12];
    int l, c;
    for (l = 0; l < 12; l++) {
        for (c = 0; c < 12; c++) {
            scanf("%lf", &matriz[l][c]);
        }
    }

    if (T == 'S' || T == 'M') {
        for (l = 0; l < 12; l++) {
            for (c = 0; c < 12; c++) {  
                if (c > l && l + c < 11) {
                    soma += matriz[l][c];
                    contador++;
                }
            }
        }

        if (T == 'M') {
            soma = soma / contador; 
        }

        printf("%.1f\n", soma);
    }

    return 0;
}
