#include <stdio.h>

int main() {
    int pos, maior, val, cont;
    pos = 0;
    maior = 0;

    for (cont = 1; cont <= 100; cont++) {
        scanf("%d", &val);
        if (val > maior) {
            maior = val;
            pos = cont;
        }
    }
    
    printf("%d\n", maior);
    printf("%d\n", pos);
    
    return 0;
}
