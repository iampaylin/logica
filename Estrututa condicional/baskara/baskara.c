#include <stdio.h>
#include <locale.h>
#include <math.h>

/*

    Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
    de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
    conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.

*/

int main () {

    setlocale(LC_ALL, "Portuguese");

    float coeficienteA, coeficienteB, coeficienteC, baskara, x1, x2;

    printf("Digite seu coeficiente A\n");
    scanf("%f", &coeficienteA);

    printf("Digite seu coeficiente B\n");
    scanf("%f", &coeficienteB);

    printf("Digite seu coeficiente C\n");
    scanf("%f", &coeficienteC);

    baskara = pow(coeficienteB, 2) - 4 * coeficienteA * coeficienteC;

    if (baskara > 0) {

        x1 = ((-coeficienteB) + sqrt(baskara)) / (2 * coeficienteA);
        x2 = ((-coeficienteB) - sqrt(baskara)) / (2 * coeficienteA);
        
        printf("X1 = %.4f\n", x1);
        printf("X2 = %.4f\n", x2);

    } else {
        printf("Esta equacao nao possui raízes reais\n");
    }

    return 0;
}