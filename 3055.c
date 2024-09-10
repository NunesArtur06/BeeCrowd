#include <stdio.h>
 
int main() {
 
    int A, M, res;
    scanf("%d", &A);
    scanf("%d", &M);
    
        if (A>2*M)
        {
            res = A-(2*M);
        }
        else
        {
            res = (2*M)-A;
        }
        
        printf("%d\n", res);
 
    return 0;
}