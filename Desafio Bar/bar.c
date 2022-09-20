#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

/*

    Em um bar, o ingresso custa 10 reais para homens e 8 reais para mulheres. Cada cerveja custa 5
    reais, cada refrigerante 3 reais e cada espetinho custa 7. Além disso, o bar cobra uma taxa de
    couvert artístico no valor de 4 reais, porém, se o valor gasto com consumo for superior a 30 reais,
    o couvert artístico não é cobrado. Fazer um programa para ler os seguintes dados de um cliente do
    bar: sexo (F ou M), quantidade de cervejas, refrigerantes e espetinhos consumidos. O programa
    deve então mostrar um relatório com a conta a ser paga pelo cliente. 

*/


int main () {

    // Entrada de dados
    char sexo;
    int quantidadeDeCervejas, quantidadeDeRefrigerante, quantidadeDeEspetinho;
    float consumo, couvert, ingresso, valor;
    float totalCerveja, totalRefrigerante, totalEspetinho;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite seu sexo(F ou M)\n");
    scanf("%s", &sexo);

    printf("Digite a quantidade de cerveja(s)\n");
    scanf("%d", &quantidadeDeCervejas);

    printf("Digite a quantidade de refrigerante(s)\n");
    scanf("%d", &quantidadeDeRefrigerante);

    printf("Digite a quantidade de espetinho(s)\n");
    scanf("%d", &quantidadeDeEspetinho);

    totalCerveja = quantidadeDeCervejas * 5;
    totalRefrigerante = quantidadeDeRefrigerante * 3;
    totalEspetinho = quantidadeDeEspetinho * 7;

    consumo = totalCerveja + totalRefrigerante + totalEspetinho;

    // Mulher

    if (sexo == 'F') {
        
        ingresso = 8.00;

        // Com taxa de couvert
        if (consumo < 30) {
            couvert = 4.00;
            valor = consumo + ingresso + couvert;

            // Tela final
            printf("Relatório\n");
            printf("Consumo = %.2f\n", consumo);
            printf("Couvert = %.2f\n", couvert);
            printf("Ingresso = %.2f\n", ingresso);
            printf("\n");
            printf("Valor a pagar: %.2f\n", valor);

        } 
        // Sem taxa de couvert
        else {
            couvert = 0;
            valor = consumo + ingresso;

            // Tela final
            printf("Relatório\n");
            printf("Consumo = %.2f\n", consumo);
            printf("Isento de couvert", couvert);
            printf("Ingresso = %.2f\n", ingresso);
            printf("\n");
            printf("Valor a pagar: %.2f\n", valor);
        }
    } 
    
    // Homem

    if (sexo == 'M') {

        ingresso = 10.00;

        // Com taxa de couvert
        if (consumo < 30) {
            couvert = 4.00;
            valor = consumo + ingresso + couvert;

            // Tela final
            printf("Relatório\n");
            printf("Consumo = %.2f\n", consumo);
            printf("Couvert = %.2f\n", couvert);
            printf("Ingresso = %.2f\n", ingresso);
            printf("\n");
            printf("Valor a pagar: %.2f\n", valor);
        } 
        // Sem taxa de couvert
        else {

            couvert = 0;
            valor = consumo + ingresso;

            // Tela final
            printf("Relatório\n");
            printf("Consumo = %.2f\n", consumo);
            printf("Isento de couvert\n", couvert);
            printf("Ingresso = %.2f\n", ingresso);
            printf("\n");
            printf("Valor a pagar: %.2f\n", valor);
        }
    }

    system("pause");
    
    return 0;
    
}