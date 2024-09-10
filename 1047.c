#include <stdio.h>

int main() {
    int h_inicio, m_inicio, h_fim, m_fim;
    scanf("%d %d %d %d", &h_inicio, &m_inicio, &h_fim, &m_fim);

    int inicio_total = h_inicio * 60 + m_inicio;
    int fim_total = h_fim * 60 + m_fim;

    int duracao_total;
    if (fim_total <= inicio_total) {
        duracao_total = (24 * 60) - inicio_total + fim_total; 
    } else {
        duracao_total = fim_total - inicio_total;
    }

    int horas = duracao_total / 60;
    int minutos = duracao_total % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
