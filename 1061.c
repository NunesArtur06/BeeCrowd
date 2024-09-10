#include <stdio.h>

int main() {
    int dia_inicio, dia_fim, hh1, hh, mm1, mm, ss1, ss, dias, horas, minutos, segundos;

    scanf("Dia %d\n", &dia_inicio);  
    scanf("%d : %d : %d\n", &hh, &mm, &ss); 
    scanf("Dia %d\n", &dia_fim); 
    scanf("%d : %d : %d", &hh1, &mm1, &ss1);

    dias = dia_fim - dia_inicio;
    horas = hh1 - hh;
    minutos = mm1 - mm;
    segundos = ss1 - ss;

    if (segundos < 0) {
        segundos += 60;
        minutos--;
    }
    if (minutos < 0) {
        minutos += 60;
        horas--;
    }
    if (horas < 0) {
        horas += 24;
        dias--;
    }

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}
