#include <stdio.h>
#include <locale.h>

/*
    Problema "idades"

        Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
        nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo. 

*/


int main () {

    setlocale(LC_ALL, "Portuguese");

    char primeiroNome[256], segundoNome[256];
    int primeiraIdade, segundaIdade;

    // Nome 
    printf("Digite o nome da primeira pessoa:\n");
    gets(primeiroNome);

    printf("Digite o nome da segunda pessoa:\n");
    gets(segundoNome);

    // Idade
    printf("Digite a idade da primeira pessoa:\n");
    scanf("%d", &primeiraIdade);

    printf("Digite a idade da segunda pessoa:\n");
    scanf("%d", &segundaIdade);

    // Cálculo da media das idades

    float media = (primeiraIdade + segundaIdade) / 2;
    printf("A idade média de %s e %s é de %.1f anos\n", primeiroNome, segundoNome, media);

    return 0;
}