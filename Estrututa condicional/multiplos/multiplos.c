#include <stdio.h>
#include <locale.h>

/*

    Fazer um programa para ler dois números inteiros, 
    e dizer se um número é múltiplo do outro. 
    Os números podem ser digitados em qualquer ordem.

*/

int main () {

    setlocale(LC_ALL, "Portuguese");

    int numeroUm, numeroDois, divisaoUm, divisaoDois;

    printf("Digite seu primeiro número\n");
    scanf("%d", &numeroUm);

    printf("Digite seu segundo número\n");
    scanf("%d", &numeroDois);

    divisaoUm = numeroUm % numeroDois;
    divisaoDois = numeroDois % numeroUm;

    if (divisaoUm == 0 || divisaoDois == 0) {
        printf("São multiplos\n");
    } else {
        printf("Não são multiplos\n");
    }

    return 0;
}