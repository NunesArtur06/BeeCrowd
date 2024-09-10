#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, temp;
        printf("%d", a);
        
        for (int i = 1; i < n; i++) {
        printf(" %d", b);
        temp = a + b;
        a = b;
        b = temp;
    }
        printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    // Imprime a sequência de Fibonacci até o n-ésimo número
    fibonacci(n);
    return 0;
}
