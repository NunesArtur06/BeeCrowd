#include <stdio.h>

int main() {
    
    int N, cont, num;
    scanf("%d", &N);
    
    for(cont=1;cont<=N;cont++){
        scanf("%d", &num);
        
        if(num==0){
            printf("NULL\n");
        }
        else if(num%2==0){
            if(num>0){
                printf("EVEN POSITIVE\n");
            }else{ printf("EVEN NEGATIVE\n");}
        }
        else {
            if(num>0){
                printf("ODD POSITIVE\n");
            }else{ printf("ODD NEGATIVE\n");}
        }
    }

    return 0;
}