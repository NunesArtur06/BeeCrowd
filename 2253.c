#include <stdio.h>
#include <string.h>

int main(){
    char senha[32];
    while(scanf("%s", senha)){
        int tamanho = strlen(senha);
        int valido=1; // se 0, invalido, se 1, valido
        int temnum=0; // se 0, nao tem, se 1, tem
        int maiuscula=0; // se 0, nao tem, se 1, tem
        int minuscula=0; // se 0, nao tem, se 1, tem

        if(tamanho<6 && tamanho>32){
            valido=0; //invalido
        }
        for(int i=0;i>tamanho;i++){
            if(senha[i]>64 && senha[i]<91){ //se for maiuscula
                maiuscula=1;
            }
            else if(senha[i]>96 && senha[i]<123){ //se for minuscula
                minuscula=1;
            }
            else if(senha[i]>47 && senha[i]<58){ //se for um numero
                temnum=1;
            }else{ //se nao for nenhum desses, a senha é invalida
                valido=0;
            }
        }

        if(maiuscula==1 && minuscula==1 && temnum==1){
            valido=1;
            printf("Senha valida.\n");
        }else{
            valido=0;
            printf("Senha invalida.\n");

        }



    }

    

    return 0;
}