#include <stdio.h>
 
int main() {
 
    double A, B, C;
    scanf("%f, %f, %f", &A, &B, &C);
        if (A ≥ B+C){
            printf("NAO FORMA TRIANGULO");
        }
        if ( A*A = B*B + C*C){
            printf("TRIANGULO RETANGULO");
        }
        if (A*A > B*B + C*C){
            printf("TRIANGULO OBTUSANGULO");
        }
        if (A*A < B*B + C*C){
            printf("TRIANGULO ACUTANGULO");
        }
        if (A == B && B==C && A==C){
            printf("TRIANGULO EQUILATERO");
        }
        if (A==B && B!= C && A!=C || B==C && C!=A && B!=A || C==A && C!=B && A!=B){
            printf("TRIANGULO ISOSCELES");
        }
        
        
 
    return 0;
}