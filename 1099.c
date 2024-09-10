#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int x, y, soma = 0;
        scanf("%d %d", &x, &y);

        int menor = x < y ? x : y;
        int maior = x > y ? x : y;

        for (int num = menor + 1; num < maior; num++) {
            if (num % 2 != 0) {
                soma += num;
            }
        }

        printf("%d\n", soma);
    }

    return 0;
}
