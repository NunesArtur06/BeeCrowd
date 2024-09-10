#include <stdio.h>

int main() {
    
    int X, Y, cont;
    scanf("%d %d", &X, &Y);
    
    for(cont=1;cont<=Y;cont++){
        if(cont%X!=0){
            printf("%d ", cont);
        }
        if(cont%X==0){
            printf("%d\n", cont);
        }
    }
    
    
    return 0;
}