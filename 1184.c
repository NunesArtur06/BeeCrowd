#include <stdio.h>

int main() {
    
    char c;
    float matriz[12][12];
    scanf("%c", &c);
    // preenchimento da matriz
    
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    float soma;
    if(c=='S'){ //soma
        for(int i=1;i<12;i++){
            for(int j=0;j<11;j++){
                if(i>j){
                    soma+=matriz[i][j];
                }
        }
    printf("%.1f\n", soma);    
    }
    }else{ //media
        for(int i=1;i<12;i++){
            for(int j=0;j<11;j++){
                if(i>j){
                    soma+=matriz[i][j];
                }
        }
    }
    printf("%.1f\n", soma/66.0);
    }
    

    return 0;
}