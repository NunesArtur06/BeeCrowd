#include <stdio.h>
 
int main() {
    char nome[61];
    double sal, vend, total;
    scanf("%s", &nome);
    scanf("%lf", &sal);
    scanf("%lf", &vend);
    #define vend vend*0.15;
    total = sal + vend;
    printf("TOTAL = R$ %.2lf\n", total);
    
    return 0;
}