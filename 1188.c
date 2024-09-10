#include <stdio.h>

int main() {

    double num, soma=0.0, cont=0.0;
    char O;
    scanf("%c", &O);
    double matriz[12][12];
    
    //montando a matriz:
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    //logica do problema:
    for(int i=11;i>6;i--){
        for(int j=12-i;j<i;j++){
            soma+=matriz[i][j];
            cont++;
        }
    }
    if(O=='S') printf("%.1lf\n", soma);
    if(O=='M') printf("%.1lf\n", soma/cont);
    
    
    
    return 0;
}