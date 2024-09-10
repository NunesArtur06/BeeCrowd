#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n); // casos de teste
    getchar();  
    
    for (int i = 0; i < n; i++) {
        char placa[101];
        fgets(placa, 101, stdin);  
        placa[strcspn(placa, "\n")] = '\0';

        int tamanho = strlen(placa);

         
        if (tamanho != 8) {
            printf("FAILURE\n");
            continue; // Vai para o próximo caso de teste
        }

        int pode = 1;  

         
        for (int j = 0; j < 3; j++) { 
            if (!(placa[j] >= 'A' && placa[j] <= 'Z')) {// Verifica se os três primeiros caracteres são letras maiúsculas
                pode = 0;
                break;
            }
        }

        
        if (placa[3] != '-') { // Verifica se o quarto caractere é um hífen
            pode = 0;
        }

        
        for (int j = 4; j < 8; j++) { 
            if (!(placa[j] >= '0' && placa[j] <= '9')) { // Verifica se os quatro últimos caracteres são dígitos
                pode = 0;
                break;
            }
        }

         
        if (!pode) {
            printf("FAILURE\n");
            continue; // Vai para o próximo caso de teste
        }
        
         
        int ultimo = placa[7] - '0';// Obtém o último dígito da placa e converte para valor numérico
        
        if (ultimo == 1 || ultimo == 2) {
            printf("MONDAY\n");
        } else if (ultimo == 3 || ultimo == 4) {
            printf("TUESDAY\n");
        } else if (ultimo == 5 || ultimo == 6) {
            printf("WEDNESDAY\n");
        } else if (ultimo == 7 || ultimo == 8) {
            printf("THURSDAY\n");
        } else if (ultimo == 9 || ultimo == 0) {
            printf("FRIDAY\n");
        }
    }

    return 0;
}
