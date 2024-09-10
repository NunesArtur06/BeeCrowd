#include <stdio.h>

int main() {
    
    int A, N, F;
    scanf("%d", &A); // area de abertura do telescopio em mm²
    scanf("%d", &N); // numero de estrelas a serem estudadas
    
    int array[N];
    int cont=0;
    for(int i=0;i<N;i++){
        scanf("%d", &F); // fluxo de fotons que cada estrela emite
        array[i]=F;
    }
    for(int i=0;i<N;i++){
        if (array[i]*A >= 40000000){
            cont++;
        }
    }
    printf("%d\n", cont);
    
    return 0;
}