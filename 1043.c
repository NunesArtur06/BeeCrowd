#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, P, AREA;
    scanf("%lf %lf %lf", &A, &B, &C);
    
     if((A>fabs(B-C)) && (A<fabs(B+C)) || (B>fabs(A-C)) && (B<fabs(A+C)) || (C>fabs(A-B)) && (C<fabs(A+B)))
     {
         P = A + B + C;
        printf("Perimetro = %.1f\n", P);
     }
       else {
            AREA = (A+B)*C/2;
            printf("Area = %.1lf\n", AREA);
       }
         
              

    return 0;
}