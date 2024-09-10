#include <stdio.h>

int main() {
    int L;
    char T;
    float soma = 0;
    scanf("%d %c", &L, &T);
    
    double matriz[12][12];
    int l, c;
    for (l = 0; l < 12; l++) {
        for (c = 0; c < 12; c++) {
            scanf("%lf", &matriz[l][c]);
        }
    }
    
    if (T == 'S') {
        for (c = 0; c < 12; c++) {
            soma += matriz[L][c];
        }
        printf("%.1f\n", soma);
        
    } else if (T == 'M') {
        for (c = 0; c < 12; c++) {
            soma += matriz[L][c];
        }
        printf("%.1f\n", soma / 12.0);
    }

    return 0;
}
