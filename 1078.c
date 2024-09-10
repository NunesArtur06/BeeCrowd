#include <stdio.h>
 
int main() {
 
    int num, N;
    num=1;

    scanf("%d", &N);

    while(num<=10){
        printf("%d x %d = %d\n", num, N, num*N);
        num++;
    }

    return 0;
}