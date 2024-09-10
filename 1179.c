#include <stdio.h>

int main() {
    int x;
    int i;
    int contp = 0; 
    int conti = 0;
    int par[5];
    int impar[5];

    for (i = 0; i < 15; i++) {
        scanf("%d", &x);
        
        if (x % 2 == 0) {  
            par[contp] = x;
            contp++;
            if (contp == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                contp = 0;
            }
        } else {  
            impar[conti] = x;
            conti++;
            if (conti == 5) { 
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                conti = 0; 
            }
        }
    }
    
    for (i = 0; i < conti; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    
    for (i = 0; i < contp; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
