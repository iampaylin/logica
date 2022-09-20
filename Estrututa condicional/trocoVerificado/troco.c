#include <stdio.h>
#include <locale.h>

/*

    Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. 
    O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, 
    e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido 
    ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o 
    valor restante conforme exemplo. 

*/

int main () {

    float precoUnitario, dinheiroRecebido, troco, trocoInvertido, precoProdutos, precoTotal;
    int quantidadeComprada;

    printf("Digite o preço unitário do produto\n");
    scanf("%f", &precoUnitario);

    printf("Digite a quantidade comprada\n");
    scanf("%d", &quantidadeComprada);

    printf("Digite o dinheiro recebido\n");
    scanf("%f", &dinheiroRecebido);

    precoProdutos = precoUnitario * quantidadeComprada;
    troco = dinheiroRecebido - precoProdutos;
    trocoInvertido = precoProdutos - dinheiroRecebido;

    if (dinheiroRecebido < precoProdutos) {
        printf("Preço unitário do produto: %.2f\n", precoUnitario);
        printf("Quantidade comprada: %d\n", quantidadeComprada);
        printf("Dinheiro recebido: %.2f\n", dinheiroRecebido);
        printf("Dinheiro insuficiente, faltam %.2f reais\n", trocoInvertido);
    } else {
        printf("Preço unitário do produto: %.2f\n", precoUnitario);
        printf("Quantidade comprada: %d\n", quantidadeComprada);
        printf("Dinheiro recebido: %.2f\n", dinheiroRecebido);
        printf("Troco: %.2f\n", troco);
    }
    

    return 0;
}