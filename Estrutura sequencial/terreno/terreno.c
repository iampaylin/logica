#include <stdio.h>
#include <locale.h>

/*
    Problema "terreno"
    
        Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
        casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
        o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
        duas casas decimais, conforme exemplo. 
*/

int main () {

    setlocale(LC_ALL, "Portuguese");

    float largura;
    float comprimento;
    float valorMetroQuadrado;

    printf("Digite a largura do terreno");
    scanf("%f", &largura);

    printf("Digite o comprimento do terreno");
    scanf("%f", &comprimento);

    printf("Digite o valor do metro quadrado");
    scanf("%f", &valorMetroQuadrado);

    float area = largura * comprimento;
    float preco = area * valorMetroQuadrado;

    printf("Área do terreno: %.2f\n", area);
    printf("Preço do terreno: %.2f\n", preco);

    return 0;
}