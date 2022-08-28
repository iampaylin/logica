#include <stdio.h>
#include <math.h>
#include <locale.h>

/* 
    Problema "retangulo"
    
    Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
    da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos. 
*/

int main () {

    setlocale(LC_ALL, "Portuguese");

    float base;

    printf("Digite a sua base\n");
    scanf("%f", &base);


    float altura;

    printf("Digite sua altura\n");
    scanf("%f", &altura);

    float area = base * altura;
    float perimetro = (2 * base) + (2 * altura);
    float diagonal = sqrt(pow(base, 2) + pow(altura, 2));


    printf("Sua área é de: %.4f\n", area);
    printf("Seu perímetro é de: %.4f\n", perimetro);
    printf("Sua diagonal é de: %.4f\n", diagonal);

    return 0;
}