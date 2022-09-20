#include <stdio.h>
#include <locale.h>

int main () {

    float primeirDistancia, segundaDistancia, terceiraDistancia, menor, maior;

    printf("Digite as três distâncias\n");
    scanf("%f%f%f", &primeirDistancia, &segundaDistancia, &terceiraDistancia);

    menor = primeirDistancia;
    maior = primeirDistancia;

    if (menor > segundaDistancia) {
        menor = segundaDistancia;
    } if (menor > terceiraDistancia) {
        menor = terceiraDistancia;
    } 

    if (maior < segundaDistancia) {
        maior = segundaDistancia;
    } if (maior < terceiraDistancia) {
        maior = terceiraDistancia;
    }

    printf("Maior distância = %.2f\n", maior);

    return 0;
}