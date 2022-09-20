#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


/*

Uma empresa vai conceder um aumento percentual de salário aos seus 
funcionários dependendo de quanto cada pessoa ganha, conforme tabela ao lado. 
Fazer um programa para ler o salário de uma pessoa, daí mostrar qual o novo salário desta pessoa depois do aumento, 
quanto foi o aumento e qual foi a porcentagem de aumento

Salário atual Aumento 
Até R$ 1000.00 20% 
Acima de R$ 1000.00 até R$ 3000.00 15% 
Acima de R$ 3000.00 até R$ 8000.00 10% 
Acima de R$ 8000.00 5% 

*/

int main () {

    float salario, aumento, porcentagem,novoSalario;

    setlocale(LC_ALL, "Portuguese");

    printf ("Digite seu salário atual\n");
    scanf("%f", &salario);

    if (salario <= 1000.00) {
        porcentagem = 0.20;
        aumento = salario * porcentagem;
        novoSalario = salario + aumento;

        printf("Seu novo salário é %.2f\n", novoSalario);
        printf("Seu aumento foi de %.2f\n", aumento);
    } if (salario > 1000.00 && salario <= 3000.00) {
        porcentagem = 0.15;
        aumento = salario * porcentagem;
        novoSalario = salario + aumento;

        printf("Seu novo salário é %.2f\n", novoSalario);
        printf("Seu aumento foi de %.2f\n", aumento);
    } if (salario > 3000.00 && salario <= 8000.00) {
        porcentagem = 0.10;
        aumento = salario * porcentagem;
        novoSalario = salario + aumento;

        printf("Seu novo salário é %.2f\n", novoSalario);
        printf("Seu aumento foi de %.2f\n", aumento);
    } if (salario > 8000.00) {
        porcentagem = 0.05;
        aumento = salario * porcentagem;
        novoSalario = salario + aumento;

        printf("Seu novo salário é %.2f\n", novoSalario);
        printf("Seu aumento foi de %.2f\n", aumento);
    }

    system("pause");

    return 0;
}