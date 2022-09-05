#include <stdio.h>
#include <math.h>
#include <locale.h>

/*

    Problema "circulo"  
    Fazer um programa para ler o valor "r" do raio de um círculo, 
    e depois mostrar o valor da área do círculo com três casas decimais. 
    A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋.𝑟². 
    Você pode usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação, 
    ou então, se preferir, use diretamente o valor 3.14159.

*/

int main () {

    setlocale(LC_ALL, "Portuguese");

    float raio, pi, area;

    printf("Digite o raio do seu círculo\n");
    scanf("%f", &raio);

    pi = 3.14159;
    area = pi * (pow(raio, 2));

    printf("A área do seu círculo é de: %.3f\n", area);


    return 0;
}