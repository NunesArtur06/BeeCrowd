#include <stdio.h>

int main() {
    int A, B, D1, D2;
    scanf("%d %d", &A, &B);
    D1 = A%B;
    D2 = B%A;
    
        if ((D1 == 0) || (D2 ==0)){
            printf("Sao Multiplos\n");
        }
        else if((D1 != 0)||(D2 != 0)){
            printf("Nao sao Multiplos\n");
        }
    return 0;
}