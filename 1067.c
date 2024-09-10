#include <stdio.h>
 
int main() {
 
    int num;
    scanf("%d", &num);
    
    for(int cont=0;cont<=num;cont++){
        if(cont%2!=0) printf("%d\n", cont);
    }




    return 0;
}