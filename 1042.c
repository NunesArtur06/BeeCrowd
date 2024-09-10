#include <stdio.h>

int main(){  
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
        if(A<B && B<C && A<C){
            printf("%d\n%d\n%d\n", A, B, C);
        }
        if(B<A && A<C && B<C){
            printf("%d\n%d\n%d\n", B, A, C);
        }
        if(B<C && C<A && B<A){
            printf("%d\n%d\n%d\n", B, C, A);
        }
        if(C<B && B<A && C<A){
            printf("%d\n%d\n%d\n", C, B,A);
        }
        if(C<A && A<B && C<B){
            printf("%d\n%d\n%d\n", C, A, B);
        }
        if(A<C && C<B && A<B){
            printf("%d\n%d\n%d\n", A, C, B);
        }
        
        printf("\n%d\n%d\n%d\n", A, B, C);
    return 0;
}