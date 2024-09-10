#include <stdio.h>

int main(){

    int num;
    int maxfreq = 0;
    scanf("%d", &num);
    getchar();
    char linha[201];
    for (int i = 0; i < num; i++){

        fgets(linha, 201, stdin);
        int freq[26] = {0}; // frequencia das 26 letras do alfabeto, inicializados com 0

        int size = strlen(linha);
        for (int j = 0; j < size; j++){ //verifica se o caractere ta etnre a e z ou A e Z
            if (linha[j] >= 'a' && linha[j] <= 'z') {
                freq[linha[j] - 'a']++;   
            } else if (linha[j] >= 'A' && linha[j] <= 'Z') {
                freq[linha[j] - 'A']++;   
            }
        }

        for(int j = 0; j < 26; j++){ //descobrindo a maior frequencia
            if(freq[j] > maxfreq){
                maxfreq = freq[j];
            }
        }

        for (int j = 0; j < 26; j++) { //printa a letra de maior freq
            if (freq[j] == maxfreq) {
                printf("%c", 'a' + j);   
            }
        }
            printf("\n");  



        }
    return 0;
}


