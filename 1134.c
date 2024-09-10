#include <stdio.h>

int main() {
    
    int X, Y, cont, soma;
    soma = 0;
    scanf("%d %d", &X, &Y);
    if(X>Y){
        for(cont=Y;cont<=X;cont++){
            if(cont%13!=0) soma+=cont;
        }
    }else{
        for(cont=X;cont<=Y;cont++){
            if(cont%13!=0) soma+=cont;
        }
    }
    printf("%d\n", soma);

    return 0;
}