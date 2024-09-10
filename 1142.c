#include <stdio.h>

int main() {
    
    int N, cont, prim=1, seg=2, terc=3;
    scanf("%d", &N);
    
    for(cont=0;cont<=(N-1);cont++){
        printf("%d %d %d PUM\n", prim, seg, terc);
        prim+=4;
        seg+=4;
        terc+=4;
    }
    
    return 0;
}