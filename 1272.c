#include <stdio.h>

int main(){

    int num, i;
    char input[52];
    char resposta[51];
    scanf("%d", &num);
    getchar();

    for(i=0;i<num;i++){
        int j =0;
        while (j < 51 && (input[j] = getchar()) != '\n' && input[j] != EOF) {//le os caracteres do teclado, um a um, pelo getchar e armazena no 'input'
            j++;  // quantidade de caracteres lidos;
        }
        input[j] = '\0'; //termina a string manualmente

        int cont=0;
        int flag=0; //indica se esta dentro da palavra. inicialmente, ou seja, quando =0, esta fora da palavra

        for(int c=0;(c<input[c])!='\0';c++){
            if(input[c]!=' '){ // verifica se o caractere atual nao eh um espaco
                if(!flag){ 
                //encontrou o incio de uma uma nova palavra
                    if(cont<50){
                        resposta[cont++]=input[c];
                    }
                    flag=1;
                }    
            }else{
                //encontrou um espaco, entao nao esta mais dentro de uma palavra
                flag=0;
            }
        }

        //termina manualmente a string
        resposta[cont]='\0';
        printf("%s\n", resposta);
        }

    return 0;
}
