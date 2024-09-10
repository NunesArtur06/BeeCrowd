#include <stdio.h>
 
int main() {
 
    int n, cont, a, b, nteste=1;
    scanf("%d", &n);
    char nome1[500], nome2[500];


    while(n!=0){
        while(n!=0){
            scanf("%s", nome1);
            scanf("%s", nome2);
            printf("Teste %d\n", nteste);
            
            for(cont=1;cont<=n;cont++){
                scanf("%d %d", &a, &b);
                if((a+b)%2==0) printf("%s\n", nome1);
                else printf("%s\n", nome2);
            }
            nteste++;
            printf("\n");
            scanf("%d", &n);
        }
    }
 
    return 0;
}