#include <stdio.h>
 
int main() {
 
    int A, B;
    float C;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%f", &C);
    
    printf("NUMBER = %d\n", A);
    printf("SALARY = U$ %.2f\n", C*B);
 
    return 0;
}