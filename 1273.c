#include <stdio.h>
#include <string.h>

int main(){

    int num, i;
    int casoum = 1;
    while(scanf("%d", &num)!=0){ //roda ate o num ser igual a 0
        if (num == 0) break;
        char nomes[num][51]; // matriz 2d, que armazena num nomes de no max 50 caractere
        int maior = 0;//guarda o tamanho da maior string possivel
        
        //lendo as palavras e definindo o tamanho maximo de caracteres
        for(i=0;i<num;i++){
            scanf("%s", nomes[i]);
            int tam = strlen(nomes[i]);
            if(tam>maior){
                maior=tam;
            }
        }
        //imprime uma linha em branco entre os casos de teste, exceto no primerio
        if (!casoum) {
            printf("\n");
        }
        casoum = 0;
        
        //justificando
        for(i=0;i<num;i++){
            int tam=strlen(nomes[i]);
            if(tam<maior){
                 for (int j = 0; j < (maior - tam); j++) {
                    printf(" ");
                }
            }
            printf("%s\n", nomes[i]);
        }
        printf("\n");
    }
    
    return 0;
}
