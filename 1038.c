#include <stdio.h>

int main() {
    
    int cod, quant;
    float total;
    scanf("%d %d", &cod, &quant);
    
    if (cod == 1){
        total = 4*quant;
        printf("Total: R$ %.2f\n", total);
    }
    if (cod == 2){
        total = quant*4.5;
        printf("Total: R$ %.2f\n", total);
    }
    if (cod == 3){
        total = 5*quant;
        printf("Total: R$ %.2f\n", total);
    }
    if (cod == 4){
        total = 2*quant;
        printf("Total: R$ %.2f\n", total);
    }
    if (cod == 5){
        total = 1.5*quant;
        printf("Total: R$ %.2f\n", total);
    }
    return 0;
}