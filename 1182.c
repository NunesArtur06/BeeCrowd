#include <stdio.h>

int main() {
    int C;
    char T;
    float soma = 0;
    scanf("%d %c", &C, &T);
    
    double matriz[12][12];
    int l, c;
    for (l = 0; l < 12; l++) {
        for (c = 0; c < 12; c++) {
            scanf("%lf", &matriz[l][c]);
        }
    }
    
    if (T == 'S') {
        for (l = 0; l < 12; l++) {
            soma += matriz[l][C];
        }
        printf("%.1f\n", soma);
        
    } else if (T == 'M') {
        for (l = 0; l < 12; l++) {
            soma += matriz[l][C];
        }
        printf("%.1f\n", soma / 12.0);
    }

    return 0;
}
