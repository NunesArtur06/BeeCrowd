#include <stdio.h>

int main() {
    
     int num, val, cont;
     val = 0;
     for(cont=1;cont<=5;cont++){
         scanf("%d", &num);
         if(num%2==0){
             val++;
         }
     }
    printf("%d valores pares\n", val);
    
    return 0;
}