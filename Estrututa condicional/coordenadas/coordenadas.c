#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

    Leia os valores das coordenadas X e Y de um ponto no plano cartesiano. 
    A seguir, determine qual o quadrante ao qual pertence o ponto (Q1, Q2, Q3 ou Q4). 
    Se o ponto estiver na origem, escreva a mensagem “Origem”. 
    Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

*/

int main () {

    float primeiraCoordenada, segundaCoordenada;

    printf("Digite sua primeira coordenada (x)\n");
    scanf("%f", &primeiraCoordenada);

    printf("Digite sua segunda coordenada (y)\n");
    scanf("%f", &segundaCoordenada);

    if (primeiraCoordenada > 0 && segundaCoordenada > 0) {
        printf("Sua coordenada (%.1f,%.1f) se encontra no primeiro quadrante\n", primeiraCoordenada, segundaCoordenada);
    } if (primeiraCoordenada < 0 && segundaCoordenada > 0) {
        printf("Sua coordenada (%.1f,%.1f) se encontra no segundo segundo\n", primeiraCoordenada, segundaCoordenada);
    } if (primeiraCoordenada < 0 && segundaCoordenada < 0) {
        printf("Sua coordenada (%.1f,%.1f) se encontra no terceiro quadrante\n", primeiraCoordenada, segundaCoordenada);
    } if (primeiraCoordenada > 0 && segundaCoordenada < 0) {
        printf("Sua coordenada (%.1f,%.1f) se encontra no quarto quadrante\n", primeiraCoordenada, segundaCoordenada);
    } if (primeiraCoordenada == 0 && segundaCoordenada == 0) {
        printf("Sua coordenada (%.1f,%.1f) se encontra na origem\n", primeiraCoordenada, segundaCoordenada);
    } if (segundaCoordenada == 0) {
        printf("Sua coordenada (%.1f,%.1f) se encontra no eixo X\n", primeiraCoordenada, segundaCoordenada);
    } if (primeiraCoordenada == 0) {
        printf("Sua coordenada (%.1f,%.1f) se encontra no eixo Y\n", primeiraCoordenada, segundaCoordenada);
    }

    return 0;
}