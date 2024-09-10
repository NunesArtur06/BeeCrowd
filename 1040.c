#include <stdio.h>

int main() {
    
    float N1, N2, N3, N4, media, nota, media_f;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    media = (2*N1 + 3*N2 + 4*N3 + 1*N4)/10;
        printf("Media: %.1f\n", media);
        
        if (media >= 7.0){
            printf("Aluno aprovado.\n");
        }
        if (media < 5.0){
            printf("Aluno reprovado.\n");
        }
        if (media >= 5.0 && media <= 6.9)
        {
            printf("Aluno em exame.\n");
            scanf("%f", &nota);
            printf("Nota do exame: %.1f\n", nota);
            media_f = (media+nota)/2;
                if (media_f>= 5.0){
                    printf("Aluno aprovado.\n");
                }
                else{
                    printf("Aluno reprovado.\n");
                }
                printf("Media final: %.1f\n", media_f);
        }
        
    return 0;
}