#include <stdio.h>
#include <math.h>
#include <locale.h>


/*

    Problema "soma" 

    Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes números.

*/


int main () {

    setlocale(LC_ALL, "Portuguese");

    int x, y, soma;

    printf("Digite seu primeiro número\n");
    scanf("%d", &x);

    printf("Digite seu segundo número\n");
    scanf("%d", &y);

    soma = x + y;

    printf("O valor da soma destes números é %d\n", soma);

    return 0;
}