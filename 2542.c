#include <stdio.h>

int main() {
    int N, M, L, CM, CL, A;
    
    while (scanf("%d", &N) != EOF) {
        scanf("%d %d", &M, &L);
        
        int marcos[M][N], leonardo[L][N];
        
        // Leitura do baralho de Marcos
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &marcos[i][j]);
            }
        }
        
        // Leitura do baralho de Leonardo
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &leonardo[i][j]);
            }
        }
        
        // Leitura das cartas escolhidas e do atributo sorteado
        scanf("%d %d", &CM, &CL);
        scanf("%d", &A);
        
        // Comparar o atributo sorteado nas cartas escolhidas
        int atributoMarcos = marcos[CM-1][A-1];
        int atributoLeonardo = leonardo[CL-1][A-1];
        
        if (atributoMarcos > atributoLeonardo) {
            printf("Marcos\n");
        } else if (atributoMarcos < atributoLeonardo) {
            printf("Leonardo\n");
        } else {
            printf("Empate\n");
        }
    }
    
    return 0;
}
