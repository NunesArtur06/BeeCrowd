#include <stdio.h>

int main() {
    int A, B, C, D, soma_cd, soma_ab;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    soma_cd = C+D;
    soma_ab = A+B;
    
        if (B > C && D > A && soma_cd > soma_ab && (C > 0 && D > 0) && A%2 == 0){
            
            printf ("Valores aceitos\n");
        }
        else{
            printf("Valores nao aceitos\n");
        }

    return 0;
}