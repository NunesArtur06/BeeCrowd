#include <stdio.h>

int main() {
    int n, escolha, cor, correto = 0, i=0, num=0;
    
    
    while(1){
        scanf("%d", &n);
        if(n==0){
            break;
        }
        if(n!=0){
            for(i=1;i<=n;i++){
                
                for(num=1;num<=5;num++){
                    scanf("%d", &cor);
                    
                    if(cor<=127){
                        escolha=num-1;
                        correto++;
                    }
                    
                }
                if(correto==1){
                    printf("%c\n", 'A'+escolha);
                    }else{
                        printf("*\n");
                    }
                    correto=0;
                }
            }
        }
        
        
        
    return 0;
}
