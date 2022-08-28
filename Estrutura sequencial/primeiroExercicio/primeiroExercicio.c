#include <stdio.h>
#include <locale.h>

int main () {
    
    setlocale(LC_ALL, "Portuguese");

    char nome[256];
    int idade;


    printf("Qual o seu nome?\n");
    scanf("%s", &nome);

    printf("Qual sua idade?\n");
    scanf("%d", &idade);

    printf("Olá %s, você tem %d anos\n", nome, idade);


    return 0;
}