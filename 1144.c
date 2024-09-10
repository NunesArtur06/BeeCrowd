#include <stdio.h>

int main() {
    
    int N, cont, prim=1, quad1, cubo1;
    scanf("%d", &N);
    
    for(cont=1;cont<=N;cont++){
        quad1=cont*cont;
        cubo1=cont*cont*cont;
        printf("%d %d %d\n", cont, quad1, cubo1);
        printf("%d %d %d\n", cont, (quad1+1), (cubo1+1));

    }
    
    return 0;
}