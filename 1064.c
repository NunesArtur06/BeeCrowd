#include <stdio.h>

int main() {
    float num, medt;
    int val, cont;
    medt = 0;
    val = 0;
    for(cont=1;cont<=6;cont++){
        scanf("%f", &num);
        if(num>=0){
            val++;
            medt = medt+num;
        }
    }
    printf("%d valores positivos\n", val);
    printf("%.1f\n", medt/val);
    return 0;
}