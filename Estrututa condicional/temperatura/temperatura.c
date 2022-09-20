#include <stdio.h>
#include <locale.h>

int main () {

    char temperatura;
    float celsius, far;

    printf("Voce vai digitar a temperatura em qual escala (C/F)?\n");
    scanf("%s", &temperatura);


    if (temperatura == 'C') {
        
        printf("Digite sua temperatura em Celsius\n");
        scanf("%f", &celsius);

        far = (celsius * 9 / 5) + 32;

        printf("Temperatura equivalente em Fahrenheit: %.1f\n", far);

    } if (temperatura == 'F') {

        printf("Digite sua temperatura em Fahrenheit\n");
        scanf("%f", &far);

        celsius = (far - 32) * 5 / 9;


        printf("Temperatura equivalente em Celsius: %.1f\n", celsius);
        
    } else {

        printf("Os dados inseridos estão incorretos, por favor insira novamente\n");

    }
    



    return 0;
}