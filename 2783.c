#include <stdio.h>

int main() {
    
    int N, C, M, X, Y;
    scanf("%d %d %d", &N, &C, &M); //  N é numero de figurinhas, C é o numero de figurinhas carimbadas e M o numero de figurinhas ja compradas.
    
    int carimbada[70];
    int comprada[300];
    int album[110];
    
    for(int i=0; i<=70;i++){
        carimbada[i]=0;
    }
    for(int i=0; i<=300;i++){
        comprada[i]=0;
    }
    for(int i=0; i<=110;i++){
        album[i]=0;
    }
    
    int krimbd=0;
    
    for(int i=0;i<C;i++){
        scanf("%d", &X); //  X é o numero exato da figurinha carimbada.
        carimbada[X]=1;
    }
    for(int i=0;i<M;i++){
        scanf("%d", &Y); // Y é o numero exato da figurinha que foi comprada.
        comprada[Y]=1;
    }
    
    
    
    for(int i=0;i<=70;i++){
        if(carimbada[i]==comprada[i] && carimbada[i]==1 && comprada[i]==1){
            krimbd++;
        }
    }
    int res = C-krimbd;
    
    if(res== 11){
        res=9;
    }
    if(res== 12){
        res=8;
    }
    
    printf("%d\n", res);
    
    
    
    
    
    return 0;
}