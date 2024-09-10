#include <stdio.h>
 
int main() {
 
    int n, num, cont, dentro=0, fora=0;
    scanf("%d", &n);

    for(cont=1;cont<=n;cont++){
        scanf("%d", &num);
        if(num<=20 && num>=10){
             dentro+=1;
        }else fora+=1;
    }
        printf("%d in\n", dentro);
        printf("%d out\n", fora);


    return 0;
}