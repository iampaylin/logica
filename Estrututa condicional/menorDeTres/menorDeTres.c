#include <stdio.h>
#include <locale.h>

/*

    Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
    números lidos. Em caso de empate, mostrar apenas uma vez.

*/

int main () {

    setlocale(LC_ALL, "Portuguese");

    int primeiroNumero, segundoNumero, terceiroNumero, menor, maior;

    printf("Digite seu primeiro número\n");
    scanf("%d", &primeiroNumero);

    printf("Digite seu segundo número\n");
    scanf("%d", &segundoNumero);

    printf("Digite seu terceiro número\n");
    scanf("%d", &terceiroNumero);

    menor = primeiroNumero;
    maior = primeiroNumero;

    if (menor > segundoNumero) {
        menor = segundoNumero;
    } if (menor > terceiroNumero) {
        menor = terceiroNumero;
    } 

    if (maior < segundoNumero) {
        maior = segundoNumero;
    } if (maior < terceiroNumero) {
        maior = terceiroNumero;
    }

    printf("Menor = %d\n", menor);
    

    return 0;
}