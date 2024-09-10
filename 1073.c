#include <stdio.h>

int main() {
    
     int N, cont;
     scanf("%d", &N);
     for (cont=1;cont<=N;cont++)
     {
        if(cont%2==0){
            printf("%d^2 = %d\n",cont, (cont*cont));
        }
     }
     
     
    return 0;
}