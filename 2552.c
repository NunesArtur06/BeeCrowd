#include <stdio.h>

int main() {
    int N, M;
    
    while (scanf("%d %d", &N, &M) != EOF) {
        int matriz[N][M];
        int resultado[N][M];
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (matriz[i][j] == 1) {
                    resultado[i][j] = 9; 
                } else {
                    int cont = 0;
                    
                    if (j + 1 < M && (matriz[i][j + 1] == 1)) cont++; 
                    if (j - 1 >= 0 && (matriz[i][j - 1] == 1)) cont++; 
                    if (i + 1 < N && (matriz[i + 1][j] == 1)) cont++; 
                    if (i - 1 >= 0 && (matriz[i - 1][j] == 1)) cont++;

                    resultado[i][j] = cont;
                }
            }
        }
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                printf("%d", resultado[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
