#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    #define altura 1.75

int main(){
    setlocale(LC_ALL, "portuguese");

    float pesoideal;

    pesoideal = 72.7 * altura - 58;

    printf("******************************************************************\n");
    printf("Olá, irei calcular o peso ideal de uma pessoa com 1.75m de altura.\n");
    printf("******************************************************************\n\n");

    printf("O peso ideal é de: %.2fKg\n", pesoideal);

    return 0;
}
