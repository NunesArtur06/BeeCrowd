#include <stdio.h>
#include <stdlib.h>

// Função de comparação usada para ordenar o array em ordem decrescente
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N, K;
    
    // Leitura do número de competidores e número mínimo de classificados
    scanf("%d", &N);
    scanf("%d", &K);
    
    int pontuacoes[N];
    
    // Leitura das pontuações dos competidores
    for (int i = 0; i < N; i++) {
        scanf("%d", &pontuacoes[i]);
    }
    
    // Ordena as pontuações em ordem decrescente
    qsort(pontuacoes, N, sizeof(int), compare);
    
    // A pontuação na posição K-1 é a pontuação do último classificado pela quantidade mínima
    int pontuacao_minima = pontuacoes[K-1];
    
    // Contagem dos classificados
    int classificados = 0;
    for (int i = 0; i < N; i++) {
        if (pontuacoes[i] >= pontuacao_minima) {
            classificados++;
        } else {
            break; // Podemos parar de contar, pois as pontuações são ordenadas em ordem decrescente
        }
    }
    
    // Exibe o número de classificados
    printf("%d\n", classificados);
    
    return 0;
}
