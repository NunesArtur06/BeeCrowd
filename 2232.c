#include <stdio.h>
#include <math.h>

double encontrasoma(double n){
    int somaTotal = 0;
    
    for(double i = 0.0; i < n; i++){
        somaTotal += pow(2.0, i);
    }
    return somaTotal;
}

int main() {
    int num, n;
    long int res=0;
    scanf("%d", &num);

    for( int i = 0; i < num; i++){
        scanf("%d", &n);
        res = encontrasoma(n);
        printf("%d\n", res);
    }
    return 0;
}