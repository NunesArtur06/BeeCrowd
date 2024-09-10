#include <stdio.h>
 
int main() {
 
    float consumo, tempo, vm;
    scanf("%f", &tempo);
    scanf("%f", &vm);
    consumo = (tempo * vm)/12;
    printf("%.3f\n", consumo);

 
    return 0;
}