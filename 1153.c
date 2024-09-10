#include <stdio.h>
#include <string.h>

int fatorial(int num){
    int res;
    if(num==0){
        res=1;
    }else{
        res = num * fatorial(num-1);
    }
    return res;
}

int main() {
    
    int n, res;
    scanf("%d", &n);
    res = fatorial(n);
    printf("%d", res);

    return 0;
}
