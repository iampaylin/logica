#include <stdio.h>
#include <locale.h>

/*

    Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a 
    classificação desta glicose de acordo com a tabela de referência ao lado. 

*/

int main () {
    
    float glicose;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a medida da glicose\n");
    scanf("%f", &glicose);

    if (glicose > 140) {
        printf("Classificação: diabetes\n");
    } if (glicose > 100 && glicose <= 140) {
        printf("Classificação: elevado\n");
    } if (glicose <= 100) {
        printf("Classificação: normal\n");
    }

    return 0;
}