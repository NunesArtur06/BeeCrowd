#include <stdio.h>

int main() {
    int i, j;
    int array[20];
    for(int i=0;i<20;i++){
        scanf("%d", &array[i]);
    }
    
    int aux=0;
    int fim=19;
    for(int i=0;i<10;i++){
        aux=array[i];
        array[i]=array[fim];
        array[fim]=aux;
        fim--;
    }
    for(int i=0;i<20;i++){
        printf("N[%d] = %d\n", i, array[i]);   
    }

    

    return 0;
}