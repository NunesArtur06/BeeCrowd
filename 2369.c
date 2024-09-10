#include <stdio.h>
 
int main() {
 
    int n, conta, subit;
    conta=7;
    scanf("%d", &n);
    if(n<=10) printf("%d\n", conta);
           if(n==11) printf("8\n");
    else if(n>=11 && n <=30){
        subit=n-11;
        if(subit<=0) subit = 1;

     printf("%d\n", conta+=1+(1*subit));
    }
    else if(n>=31 && n<=100){
        subit=n-30;
        if(subit<=0) subit = 1;

    printf("%d\n", conta+=20+(2*(subit)));
    }
    else if(n>=101){ 
        subit=n-100;
        if(subit<=0) subit = 1;

    printf("%d\n", conta+=160+(5*(subit)));
    }

 
    return 0;
}