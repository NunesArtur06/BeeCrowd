#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n); // Removido '\n' para evitar problemas
    getchar(); // Consome o caractere '\n' remanescente

    char words[n][101];
    for (int i = 0; i < n; i++) {
        fgets(words[i], 101, stdin);
        words[i][strcspn(words[i], "\n")] = '\0'; // Remove o '\n' do final da string
    }

    int q;
    scanf("%d", &q);
    getchar(); // Consome o caractere '\n' remanescente

    for (int i = 0; i < q; i++) {
        char pesquisa[101];
        fgets(pesquisa, 101, stdin);
        pesquisa[strcspn(pesquisa, "\n")] = '\0'; // Remove o '\n' do final da string

        int cont = 0;
        int len = -1;

        for (int j = 0; j < n; j++) {
            if (strncmp(words[j], pesquisa, strlen(pesquisa)) == 0) {
                cont++;
                int wordlen = strlen(words[j]);
                if (len < wordlen) {
                    len = wordlen;
                }
            }
        }

        if (cont == 0) {
            printf("-1\n");
        } else {
            printf("%d %d\n", cont, len);
        }
    }

    return 0;
}