#include <stdio.h>

int main() {
    
    float A;
    int cont = 0;
    
    for(int i = 0; i < 6; i++){
        scanf("%f", &A);
        if (A>=0){
            cont++;
        }
    }
    
    printf("%d valores positivos\n", cont);
    return 0;
}