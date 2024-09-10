#include <stdio.h>

int main() {
    
    int A, B, D;
    scanf("%d %d", &A, &B);
    
    if (A>B){
       D = (24-A)+B;
       printf("O JOGO DUROU %d HORA(S)\n", D);
    }
    else if (A==B){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (A<B){
        D=(B-A);
        printf("O JOGO DUROU %d HORA(S)\n", D);
    }
    return 0;
}