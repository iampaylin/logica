#include <stdio.h>
#include <locale.h>


/*

    Uma operadora de telefonia cobra R$ 50.00 por um plano básico 
    que dá direito a 100 minutos de telefone. 
    Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. 
    Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu, 
    daí mostrar o valor a ser pago. 

*/

int main () {

    float planoBasico, pagamentoExcedido;
    int minutos, tempoExcedido, totalExcedido;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a quantidade de minutos utilizados\n");
    scanf("%d", &minutos);

    planoBasico = 50.00;

    if (minutos <= 100) {

        printf("Valor a pagar: R$%.2f\n", planoBasico);

    } else {

        tempoExcedido = minutos - 100;
        totalExcedido = tempoExcedido * 2;
        pagamentoExcedido = planoBasico + totalExcedido;

        printf("Valor a pagar: R$%.2f\n", pagamentoExcedido);

    }


    return 0;
}