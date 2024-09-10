#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
        for(int i = 0; i < t; i++) {
        int num;
        scanf("%d", &num);
        
        if (num == 0) {
            printf("Fib(0) = 0\n");
            continue;
        }
        
        if (num == 1) {
            printf("Fib(1) = 1\n");
            continue;
        }
        
        long long int fib[num+1]; 
        fib[0] = 0;
        fib[1] = 1;
        for (int j = 2; j <= num; j++) {
            fib[j] = fib[j-1] + fib[j-2];
        }
        printf("Fib(%d) = %lld\n", num, fib[num]);
    }
    
    return 0;
}
