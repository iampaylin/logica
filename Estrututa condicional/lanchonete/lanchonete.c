#include <stdio.h>
#include <locale.h>

/*

    Uma lanchonete possui vários produtos. 
    Cada produto possui um código e um preço. 
    Você deve fazer um programa para ler o código e a 
    quantidade comprada de um produto (suponha um código válido), 
    e daí informar qual o valor a ser pago, com duas casas 
    decimais, conforme tabela de produtos ao lado.

    Código do produto Preço do produto 
    1 R$ 5.00 
    2 R$ 3.50 
    3 R$ 4.80 
    4 R$ 8.90 
    5 R$ 7.32 

*/

int main () {

    setlocale(LC_ALL, "Portuguese");

    float quantidadeComprada, valorPagar, contaAtual;
    int codigo;

    printf("Codigo do produto comprado:\n");
    scanf("%d", &codigo);

    printf("Quantidade comprada:\n");
    scanf("%f", &quantidadeComprada);

    if (codigo == 1) {
        contaAtual = quantidadeComprada * 5.00;
        printf("Valor a pagar: R$%.2f\n", contaAtual);
    } if (codigo == 2) {
        contaAtual = quantidadeComprada * 3.50;
        printf("Valor a pagar: R$%.2f\n", contaAtual);
    } if (codigo == 3) {
        contaAtual = quantidadeComprada * 4.80;
        printf("Valor a pagar: R$%.2f\n", contaAtual);
    } if (codigo == 4) {
        contaAtual = quantidadeComprada * 8.90;
        printf("Valor a pagar: R$%.2f\n", contaAtual);
    } if (codigo == 5) {
        contaAtual = quantidadeComprada * 7.32;
        printf("Valor a pagar: R$%.2f\n", contaAtual);
    }

    return 0;
}