#include <stdio.h>

double raiz(int n) {
    double resultado = 0.0;

    for (int i = 0; i < n; i++) {
        resultado = 1.0 / (2.0 + resultado);
    }

    return 1.0 + resultado;
}

int main() {
    int n;
    scanf("%d", &n);

    double res = raiz_quadrada_2(n);
    printf("%.10lf\n", res);
    return 0;
}
