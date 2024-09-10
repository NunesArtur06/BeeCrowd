#include <stdio.h>
#include <math.h>
int main() {

    
    int a, b, c;
    while(scanf("%d", &a)){
        if(a==0) break;
        scanf("%d %d", &b, &c);
       int area=a*b;
       int res= sqrt((area*100)/c);
       printf("%d\n", res);
        
    }
    return 0;
}