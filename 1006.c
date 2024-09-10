#include <stdio.h>

int main() {
    double A, B, C, M;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    #define A 2*A
    #define B 3*B
    #define C 5*C
    M = (A + B + C)/10;
    
    printf ("MEDIA = %.1lf\n", M);
    return 0;
}