#include <stdio.h>
#include <locale.h>

/*

    Problema "pagamento" 
    Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, 
    e a quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário 
    com uma mensagem explicativa.

*/




int main () {

    setlocale(LC_ALL, "Portuguese");

    char nome[256];
    float hora, quantidade, pagamento;

    printf("Digite seu nome: \n");
    gets(nome);

    printf("Digite o valor que você recebe por hora\n");
    scanf("%f", &hora);

    printf("Digite a quantidade que você recebe por horas trabalhadas\n");
    scanf("%f", &quantidade);

    pagamento = hora * quantidade;

    printf("Prazer %s, você recebe o salário de %.2f\n", nome, pagamento);



    return 0;
}