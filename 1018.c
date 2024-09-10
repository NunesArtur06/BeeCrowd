#include <stdio.h>
 
int main() {
 
    int N, cem, cinq, vinte, dez, cinco, dois, um;

    scanf("%d", &N);
    cem = N/100;
    cinq = (N%100)/50;
    vinte = ((N%100)%50)/20;
    dez = (((N%100)%50)%20)/10;
    cinco = ((((N%100)%50)%20)%10)/5;
    dois = (((((N%100)%50)%20)%10)%5)/2;
    um = ((((((N%100)%50)%20)%10)%5)%2)/1;

    printf("%d\n", N);
    printf ("%d nota(s) de R$ 100,00\n", cem);
    printf ("%d nota(s) de R$ 50,00\n", cinq);
    printf ("%d nota(s) de R$ 20,00\n", vinte);
    printf ("%d nota(s) de R$ 10,00\n", dez);
    printf ("%d nota(s) de R$ 5,00\n", cinco);
    printf ("%d nota(s) de R$ 2,00\n", dois);
    printf ("%d nota(s) de R$ 1,00\n", um);


    return 0;
}