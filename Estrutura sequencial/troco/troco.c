#include <stdio.h>
#include <locale.h>

/*

    Problema "troco" 
    Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. 
    O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, 
    e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). 
    Seu programa deve mostrar o valor do troco a ser devolvido ao cliente.  

*/


int main () {

    setlocale(LC_ALL, "Portuguese");

    float preco, quantidade, dinheiro, troco, total;

    printf("Digite o preço unitário do produto:\n");
    scanf("%f", &preco);

    printf("Digite a quantidade de unidades compradas do produto:\n");
    scanf("%f", &quantidade);

    printf("Digite o valor em dinheiro entregue:\n");
    scanf("%f", &dinheiro);

    total = preco * quantidade;
    troco = dinheiro - total;

    printf("Seu troco é de: %.2f\n", troco);



    return 0;
}