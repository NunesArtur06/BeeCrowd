#include <stdio.h>

int main() {
    
    int t, i, N[1000], temp = 0;
    scanf("%d", &t);
    
    for(i = 0; i < 1000; i++) {
        N[i] = temp;
        printf("N[%d] = %d\n", i, N[i]);
        temp++;
        
        if(temp == t) {
            temp = 0;
        }
    }
    
    return 0;
}
