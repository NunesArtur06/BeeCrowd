#include <stdio.h>
 
int main() {
    float salario=0, nsal=0, reajuste=0, percentual=0;
    scanf("%f", &salario);
    
    if(salario>0 && salario<=400.00){
        percentual = 15;
        reajuste = salario * 0.15;
        nsal = salario + reajuste;
    }
    else if(salario>=400.01 && salario<=800.00){
        percentual = 12;
        reajuste = salario * 0.12;
        nsal = salario + reajuste;
    }
    else if(salario>=800.01 && salario<=1200.00){
        percentual = 10;
        reajuste = salario * 0.10;
        nsal = salario + reajuste;
    }
    else if(salario>=1200.01 && salario<=2000.00){
        percentual = 7;
        reajuste = salario * 0.07;
        nsal = salario + reajuste;
    }
    else if(salario>=2000.01){
        percentual = 4;
        reajuste = salario * 0.04;
        nsal = salario + reajuste;
    }
    printf("Novo salario: %.2f\n", nsal);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %.0f %%\n", percentual);

    return 0;
}
