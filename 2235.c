#include <stdio.h>

int main() {
    
    int X, cont;
    while(1){
        scanf("%d", &X);
        cont = 1;
        if(X==0){
            break;
        }
        else{
            for(X; X>1; X--){
                printf("%d ", cont);
                cont++;
            }
            printf("%d\n", cont);
        }
    }
    
    
    return 0;
}