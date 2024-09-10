#include <stdio.h>

int main() {
    
    int seg, min=0, hora=0;
    scanf("%d", &seg);
    
    if(seg<=59) printf("%d:%d:%d\n", hora, min, seg);
    if(seg>59 && seg<=3599){
        min=seg/60;
        seg=seg%60;
        printf("%d:%d:%d\n", hora, min, seg);
    }
    if(seg>3599){
        hora=seg/3600;
        min = (seg%3600)/60;
        seg = (seg%3600)%60;
        printf("%d:%d:%d\n", hora, min, seg);
    }
    
    

    return 0;
}