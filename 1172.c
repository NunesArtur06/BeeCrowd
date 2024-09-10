#include <stdio.h>
 
int main() {

    int num;
    for(int i=0;i<10;i++){
        scanf("%d", &num);
        if(num<0||num==0){
            num=1;
        }
        int X[i];
        printf("X[%d] = %d\n", i, num);
    }
    
    
 
    return 0;
}