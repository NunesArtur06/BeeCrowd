#include <stdio.h>
#include <string.h>

int main(){

    int n, i, k, j;
    scanf("%d", &n); //numero de casos

    for(i=0;i<n;i++){

        scanf("%d", &k); //numero de pessoas no grupo
        char lingua[k][21]; // n linguas, de no max 20 caracteres

        //lendo as linguas
        for(j=0;j<k;j++){
            scanf("%s", lingua[j]);
        }

        char ideal[21];
        int iguais = 1; // Supondo que todas as línguas são iguais inicialmente

        // Verificando se as línguas são iguais
        for (j = 1; j < k; j++) { // Começa do segundo elemento
            if (strcmp(lingua[j], lingua[0]) != 0) { // Se uma língua for diferente da primeira
                iguais = 0; // Marca que nem todas são iguais
                break;
            }
        }

        if (iguais) {
            strcpy(ideal, lingua[0]); // Se todas as línguas são iguais, escolha qualquer uma
        } else {
            strcpy(ideal, "ingles"); // Caso contrário, a língua "ideal" é o inglês
        }

        printf("%s\n", ideal);
    }

    return 0;
}