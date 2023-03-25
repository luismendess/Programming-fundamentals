#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "");

    float pesoideal, altura;


    printf("Olá! Por favor, insira uma altura em metros para calcular seu peso:\n");
    scanf("%f", &altura);

    pesoideal = 72.7 * altura - 58;

    printf("\nO peso ideal é de: %.2fKg\n", pesoideal);
    return 0;
}
