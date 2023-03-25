#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int A = 40, B = -1, soma, subtracao, multip, divisao, cont;

    printf("**Iniciando cálculos!**\n\n");
    printf("-Adição:\n");
    soma = A + B;
    printf("O resultado da adição é: %i\n\n", soma);
    printf("-Subtração:\n");
    subtracao = A - B;
    printf("O resultado da subtração é: %i\n\n", subtracao);
    printf("-Multiplicação:\n");
    multip = A * B;
    printf("O resultado da multiplicação é: %i\n\n", multip);
    printf("-Divisão:\n");
    divisao = A / B;
    printf("O resultado da divisão é: %i\n\n", divisao);

    B++;

    printf("**Iniciando cálculos!**\n\n");
    printf("-Adição:\n");
    soma = A + B;
    printf("O resultado da adição é: %i\n\n", soma);
    printf("-Subtração:\n");
    subtracao = A - B;
    printf("O resultado da subtração é: %i\n\n", subtracao);
    printf("-Multiplicação:\n");
    multip = A * B;
    printf("O resultado da multiplicação é: %i\n\n", multip);
    printf("-Divisão:\n");
    divisao = A / B;
    printf("O resultado da divisão é: %i\n\n", divisao);
    return 0;
}
