#include <stdio.h>
#include <string.h>

int main(){
    
    int n;
    scanf("%d", &n); // casos de teste

    for(int i=0;i<n+1;i++){
        char frase[1100];
        int letras[26] = {0}; //todas inicializadas com 0, para contar as letras que ja apareceram no array
        int distintas = 0;

        fgets(frase,1100,stdin);

        for(int j=0;frase[j]!='\0';j++){    //loop que roda ate encontrar um '\0'
            if(frase[j]>='a' && frase[j]<='z'){ // verificando se é uma letra minuscula
                int indice = frase[j]-'a'; 
                if(!letras[indice]){ //verifica se a çetra atual ainda nao foi encontrad na frase. Se retornar 0, é aprimeira vez da letra
                    letras[indice]=1; //marcando que a letra foi encontrada
                    distintas++; //incrementando a quantidade de letras distintas
                }
            }
        }
        if(i>0){
            if (distintas == 26) { //verrifica se todas as letras do alfabeto foram usadas
                printf("frase completa\n");
            } else if (distintas >= 13) { //verifica se 13 ou mais letras do alfabeto foram usadas
                printf("frase quase completa\n");
            } else { // se menos que 13 letras do alfabeto foram usadas
                printf("frase mal elaborada\n");
            }
        }
        
    }

    return 0;
}