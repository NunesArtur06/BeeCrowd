#include <stdio.h>

int main() {
    
    int N, M, cont=0;
    scanf("%d", &N);
    scanf("%d", &M);
    int album[101];
    int resposta=0;
    
    for(int i=1;i<=N;i++){  
        album[i]=0;
    }
    for(int i=0;i<M;i++){
        int X;
        scanf("%d", &X);
        album[X]=1;
        cont+=1;  
    }
    for(int i=0;i<=N;i++){
        if(album[i] == 0){
            resposta++;
        }
    }
    printf("%d\n", resposta);
    
    
    return 0;
}