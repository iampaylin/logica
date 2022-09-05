#include <stdio.h>
#include <locale.h>

/*

    Problema "consumo" 
    Fazer um programa para ler a distância total (em km) percorrida por um carro, 
    bem como o total de combustível gasto por este carro ao percorrer tal distância. 
    Seu programa deve mostrar o consumo médio do carro, com três casas decimais.  

*/



int main () {

    setlocale(LC_ALL, "Portuguese");

    float distancia, combustivelGasto, consumoMedio;

    printf("Digite sua distância percorrida\n");
    scanf("%f", &distancia);

    printf("Digite o combustível gasto ao percorrer tal distância\n");
    scanf("%f", &combustivelGasto);

    consumoMedio = distancia / combustivelGasto;

    printf("O consumo médio do carro é de %.3f\n", consumoMedio);

    return 0;
    
}