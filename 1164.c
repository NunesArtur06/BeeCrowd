#include <stdio.h>

int main() {
    int N, cont, num;
    scanf("%d", &N);
    
    for (cont = 1; cont <= N; cont++) {
        scanf("%d", &num);
        
        int soma_divisores = 0;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                soma_divisores += i;
            }
        }

        if (soma_divisores == num) {
            printf("%d eh perfeito\n", num);
        } else {
            printf("%d nao eh perfeito\n", num);
        }
    }
    
    return 0;
}
