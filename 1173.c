#include <stdio.h>
 
int main() {

    int v;
    int N[10];
    scanf("%d", &v);
    for(int i=0;i<10;i++){
        if(i==0){
            N[i]=v;
            printf("N[%d] = %d\n", i, N[i]);
        }
        else{
            v=v*2;
            N[i]=v;
            printf("N[%d] = %d\n", i, N[i]);
        }
        
    }
    
 
    return 0;
}