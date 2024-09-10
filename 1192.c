#include <stdio.h>

int main() {
    int testes, i, numA, numB, res=0;
    char C;
    
    scanf("%d", &testes);

    for(i = 0; i < testes; i++) {
        scanf("%d %c %d", &numA, &C, &numB);

        if(numA == numB) {
            res = numB * numA;
        } else if(C >= 'A' && C <= 'Z') { // Caso a letra seja maiúscula
            res = numB - numA;
        } else { // Caso a letra seja minúscula
            res = numB + numA;
        }

        printf("%d\n", res);
    }

    return 0;
}
