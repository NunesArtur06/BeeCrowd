#include <stdio.h>

int main() {
   
   int N, i;
   scanf("%d", &N);
   int array[1005];
   
   for(i=0;i<N;i++){
       scanf("%d", &array[i]);
   }
   int resp=1;
   
   for(i=2;i<N;i++){
    if( (array[i]-array[i-1]) != (array[i-1]-array[i-2]) ){
        resp++;
    }   
   }
   
   printf("%d\n", resp);
   
    return 0;
}