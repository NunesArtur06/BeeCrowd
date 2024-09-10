#include <stdio.h>
#include <string.h>

int binarioParaDecimal(const char *binario) {
    int decimal = 0;
    for (int i = 0; i < 3; i++) {
        decimal = (decimal << 1) | (binario[i] == '*' ? 1 : 0);
    }
    return decimal;
}

int main() {
    char linha[10];
    int resultados[3];
    int indice = 0;
    int soma = 0;

    while (fgets(linha, sizeof(linha), stdin)) {
        linha[strcspn(linha, "\n")] = '\0'; // Remove o caractere de nova linha

        if (strcmp(linha, "caw caw") == 0) {
            resultados[indice++] = soma;
            soma = 0; // Reseta a soma para o próximo grupo
            if (indice == 3) break; // Para se já tivermos 3 resultados
        } else {
            soma += binarioParaDecimal(linha);
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d\n", resultados[i]);
    }

    return 0;
}
