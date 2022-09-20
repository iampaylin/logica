#include <stdio.h>
#include <locale.h>

/*

    Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
    uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
    ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
    mensagem "REPROVADO", conforme exemplos. 


*/

int main () {

    setlocale(LC_ALL, "Portuguese");

    float primeiraNota, segundaNota, notaTotal, media;
    media = 60.00;

    // Entrada de dados
    printf("Digite sua primeira nota\n");
    scanf("%f", &primeiraNota);

    printf("Digite sua segunda nota\n");
    scanf("%f", &segundaNota);

    notaTotal = primeiraNota + segundaNota;

    if ( notaTotal < media) {
        printf("Nota final = %.1f\n", notaTotal);
        printf("Reprovado\n");
    } else {
        printf("Nota final = %.1f\n", notaTotal);
    }

    return 0;
}