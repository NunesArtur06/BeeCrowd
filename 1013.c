#include <stdio.h>
 
int main() {
 
    int a, b, c, MAB, MT;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    MAB = (a+b+abs(a-b))/2;
    MT = (MAB+c+abs(MAB-c))/2;
    printf("%d eh o maior\n", MT);
 
    return 0;
}