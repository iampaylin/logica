#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*

Leia a hora inicial e a hora final de um jogo. 
A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, 
tendo uma duração mínima de 1 hora e máxima de 24 horas.

*/

int main () {

    int duracao, horaInicial, horaFinal;

    setlocale(LC_ALL, "Portuguese");

    printf("Hora inicial: \n");
    scanf("%d", &horaInicial);

    printf("Hora final: \n");
    scanf("%d", &horaFinal);

    if (horaInicial < horaFinal) {
        duracao = horaInicial - horaFinal;
    } else {
        duracao = 24 - (horaInicial + horaFinal);
    }

    printf("O jogo durou %d hora(s)\n", duracao);

    return 0;
}