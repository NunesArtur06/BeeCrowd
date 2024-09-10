#include <stdio.h>
 
int main() {
 
    int N, cont;
    scanf("%d",&N);

    for(cont=1;cont<=N;cont++){
        float v1, v2, v3, mp;
        scanf("%f %f %f", &v1, &v2, &v3);
        mp = (v1*2 + v2*3 + v3*5)/10;
        printf("%.1f\n", mp);
    }

    return 0;
}