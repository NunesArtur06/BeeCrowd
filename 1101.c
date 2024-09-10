#include <stdio.h>

int main() {
    int N, M, cont, soma;

    while (1) {
        soma = 0;
        scanf("%d %d", &M, &N);

        if (N <= 0 || M <= 0) {
            break;
        } else if (M > N) {
            cont = N;
            for (cont = N; cont <= M; cont++) {
                printf("%d ", cont);
                soma += cont;
            }
            printf("Sum=%d\n", soma);
        } else {
            cont = M;
            for (cont = M; cont <= N; cont++) {
                printf("%d ", cont);
                soma += cont;
            }
            printf("Sum=%d\n", soma);
        }
    }
    return 0;
}
