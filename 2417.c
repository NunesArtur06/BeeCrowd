#include <stdio.h>
 
int main() {
 
    int cv, ce, cs, fv, fe, fs, pc, pf;
    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
    //pontos:

    cv = cv*3;
    fv = fv*3;
    pc = cv + ce;
    pf = fv + fe;

    // logica:

    if(pc>pf) printf("C\n");
    if(pf>pc) printf("F\n");
    if(pf == pc){
        if (cs>fs) printf("C\n");
        if (fs>cs) printf("F\n");
        if (fs == cs) printf("=\n");
    }

    return 0;
}