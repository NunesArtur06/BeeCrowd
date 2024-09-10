#include <stdio.h>
#include <math.h>
 
int main() {
 
    float x1, y1, x2, y2, D;
    double deltx, delty;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    
    deltx = x2 - x1;
    delty = y2 - y1;
    D = sqrt((pow(deltx, 2)) + (pow(delty, 2)));
    
    printf("%.4f\n", D);
 
    return 0;
}