#include <stdio.h>
#include <string.h>

int main() {
    
    double N, quantia, i;
    char tipo[1];
    double rato=0, sapo=0, coelho=0, total_cobaias, p_r, p_s, p_c;
    scanf("%lf", &N);
    for(i=1;i<=N;i++){
        scanf("%lf %c", &quantia, &tipo);
        if(strcmp(tipo, "R")==0){
            rato+=quantia;
        }
        else if(strcmp(tipo, "S")==0){
            sapo+=quantia;
        }
        else if(strcmp(tipo, "C")==0){
            coelho+=quantia;
        }
        
    }
    total_cobaias=rato+sapo+coelho;
    p_c = (coelho/total_cobaias)*100;
    p_r = (rato/total_cobaias)*100;
    p_s = (sapo/total_cobaias)*100;
    printf("Total: %.0lf cobaias\n", total_cobaias);
    printf("Total de coelhos: %.0lf\n", coelho);
    printf("Total de ratos: %.0lf\n", rato);
    printf("Total de sapos: %.0lf\n", sapo);
    printf("Percentual de coelhos: %.2lf %\n", p_c);
    printf("Percentual de ratos: %.2lf %\n", p_r);
    printf("Percentual de sapos: %.2lf %\n", p_s);
    return 0;
}
