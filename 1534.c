#include <stdio.h>

int main() {
    int N;

    while (scanf("%d", &N) != EOF) {
        int matriz[70][70];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j) {
                    matriz[i][j] = 1;
                } else if (i + j == N - 1) {
                    matriz[i][j] = 2; 
                } else {
                    matriz[i][j] = 3; 
                }
            }
        }

        if (N % 2 == 1) {
            int meio = N / 2;
            matriz[meio][meio] = 2;
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
