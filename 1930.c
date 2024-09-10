#include <stdio.h>
 
int main() {
 
    int T1, T2, T3, T4, num;

    scanf("%d %d %d %d", &T1, &T2, &T3, &T4);
    num = (T1-1)+(T2-1)+(T3-1)+T4;

    printf("%d", num);

    return 0;
}