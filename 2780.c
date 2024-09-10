#include <stdio.h>
 
int main() {
 
    int D, ponto=0;
    scanf("%d", &D);

    if(D <= 800) ponto = 1;
    else if( D <= 1400 && 800 < D) ponto = 2;
    else if(1400 < D && D <= 2000) ponto = 3;

    printf("%d\n", ponto);

    return 0;
}