#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[101];  
    int poder;
    int matou;
    int morreu;
} Dados;

int compara(const void *a, const void *b) {
    Dados *p1 = (Dados *)a;
    Dados *p2 = (Dados *)b;
    
    if (p1->poder != p2->poder) {
        return p2->poder - p1->poder; //p2 maior
    }else if(p1->matou != p2->matou){
        return p2->matou - p1->matou; //p2 maior
    }else if(p1->morreu != p2->morreu){
        return p1->morreu - p2->morreu; //p1 maior
    }
    return strcmp(p1->nome, p2->nome);
}

int main() {
    int num;
    scanf("%d", &num);
    getchar();
    Dados personagem[num];

    for(int i = 0; i < num; i++){
        scanf("%s %d %d %d", personagem[i].nome, &personagem[i].poder, &personagem[i].matou, &personagem[i].morreu);
    }
    qsort(personagem, num, sizeof(Dados), compara);
    
    printf("%s\n", personagem[0].nome);

    return 0;
}
