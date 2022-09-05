#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
    Problema "duracao"
    Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
    formato horas:minutos:segundos.
*/

int main () {

    int duracao, segundos, minutos, horas, total;

    setlocale(LC_ALL, "Portuguese");

    // Entrada de dados

    printf("Digite sua duração de tempo em segundos\n");
    scanf("%d", &duracao);

    // Fórmulas

    horas = duracao / 3600;
    total = duracao % 3600;

    minutos = total / 60;
    segundos = total % 60;

    // Saída de dados

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}