#include <stdio.h>
 
int main() {
 
    double R, pi, vol;
    scanf("%lf", &R);
    vol = (4.0/3)* 3.14159 * (R * R * R);
    printf("VOLUME = %.3f\n", vol);
 
    return 0;
}