#include <stdio.h>
 
int main() {
 
    int P, R;
    scanf("%d %d", &P, &R);
    if (P==1){
        if(R==1) printf("A\n");
        else printf("B\n");
    }
    else printf("C\n");

    return 0;
}