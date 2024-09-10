#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    
    while (scanf("%d %d", &N, &M) != EOF) {
        int cidade[100][100];
        int jogadorX, jogadorY, analogimonX, analogimonY;
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &cidade[i][j]);
                if (cidade[i][j] == 1) {
                    jogadorX = i;
                    jogadorY = j;
                }
                if (cidade[i][j] == 2) {
                    analogimonX = i;
                    analogimonY = j;
                }
            }
        }

        int distancia = abs(jogadorX - analogimonX) + abs(jogadorY - analogimonY);
        
        printf("%d\n", distancia);
    }

    return 0;
}
