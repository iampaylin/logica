#include <stdio.h>
#include <locale.h>
#include <math.h>

/*

    Problema "medidas" 

    Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
    com quatro casas decimais):
    a) a área do quadrado que tem lado A
    b) a área do triângulo retângulo que base A e altura B
    c) a área do trapézio que tem bases A e B, e altura C 


*/

int main () {

    float primeiraMedida, segundaMedida, terceiraMedida;
    float areaQuadrado, areaTriangulo, areaTrapezio;

    setlocale(LC_ALL, "Portuguese");

    // Entrada de dados

    printf("Digite sua primeira medida\n");
    scanf("%f", &primeiraMedida);

    printf("Digite sua segunda medida\n");
    scanf("%f", &segundaMedida);

    printf("Digite sua terceira medida\n");
    scanf("%f", &terceiraMedida);

    // Cálculo das áreas

    areaQuadrado  = pow(primeiraMedida, 2);
    areaTriangulo = (primeiraMedida * segundaMedida) / 2;
    areaTrapezio  = ((primeiraMedida + segundaMedida) * terceiraMedida) / 2;

    // Saída de dados

    printf("A área do quadrado é %.4f\n", areaQuadrado);
    printf("A área do triângulo retângulo é %.4f\n", areaTriangulo);
    printf("A área do quadrado é %.4f\n", areaTrapezio);

    return 0;

}