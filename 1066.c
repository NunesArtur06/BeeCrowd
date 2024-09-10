#include <stdio.h>

int main() {
    
     int num, valp, cont, vali, val_pos, val_neg;
     vali = 0;
     valp=0;
     val_neg=0;
     val_pos=0;
     for(cont=1;cont<=5;cont++){
         scanf("%d", &num);
         if(num%2==0){
             valp++;
         }
         if(num%2!=0){
             vali++;
         }
         if(num>0){
             val_pos++;
         }
         if(num<0){
             val_neg++;
         }
     }
    printf("%d valor(es) par(es)\n", valp);
    printf("%d valor(es) impar(es)\n", vali);
    printf("%d valor(es) positivo(s)\n", val_pos);
    printf("%d valor(es) negativo(s)\n", val_neg);
    return 0;
}