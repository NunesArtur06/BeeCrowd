#include <stdio.h>

int main() {
    int N; // Número de jogadores
    
    // Loop para processar cada caso de teste até o fim do arquivo (EOF)
    while (scanf("%d", &N) != EOF) {
        int votos_favoraveis = 0; // Inicializa a contagem de votos favoráveis ao impeachment
        int voto; // Variável para armazenar cada voto lido
        
        // Lê os votos dos N jogadores
        for (int i = 0; i < N; i++) {
            scanf("%d", &voto);
            if (voto == 1) {
                votos_favoraveis++; // Incrementa a contagem se o voto for favorável
            }
        }
        
        // Calcula se o número de votos favoráveis é suficiente para o impeachment
        // A expressão (2 * N + 2) / 3 arredonda para cima
        int limite_impeachment = (2 * N + 2) / 3;
        
        // Verifica se os votos favoráveis atingem ou superam o limite
        if (votos_favoraveis >= limite_impeachment) {
            printf("impeachment\n"); // O líder será afastado
        } else {
            printf("acusacao arquivada\n"); // A acusação é arquivada
        }
    }
    
    return 0; // Fim do programa
}
