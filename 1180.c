#include <stdio.h>
 
int main() {
    
    int N, x, menor, position;
    scanf("%d", &N);
    int array[N];

    for(int i=0;i<N;i++){
        scanf("%d", &array[i]);
    }
    
    menor=array[0];
    position= 0;
    
    for(int i=1;i<N;i++){
        if(array[i]<menor){
        menor=array[i]; 
        position = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", position);

    return 0;
}