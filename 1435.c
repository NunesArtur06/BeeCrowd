#include <stdio.h>

int main() {
    int N;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        int matriz[N][N];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int valor = i < j ? i : j;
                valor = valor < N - i ? valor : N - i - 1;
                valor = valor < N - j ? valor : N - j - 1;
                matriz[i][j] = valor + 1;
            }
        }

        // Impressão da matriz
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j == 0) {
                    printf("%3d", matriz[i][j]);
                } else {
                    printf(" %3d", matriz[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
