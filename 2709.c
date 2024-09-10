#include <stdio.h>
#include <math.h>

// Função para verificar se um número é primo
int eh_primo(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int M;
    
    while (scanf("%d", &M) != EOF) {
        int moedas[M];
        for (int i = 0; i < M; i++) {
            scanf("%d", &moedas[i]);
        }
        
        int N;
        scanf("%d", &N);
        
        int soma = 0;
        for (int i = M - 1; i >= 0; i -= N) {
            soma += moedas[i];
        }
        
        if (eh_primo(soma)) {
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        } else {
            printf("Bad boy! I’ll hit you.\n");
        }
    }
    
    return 0;
}
