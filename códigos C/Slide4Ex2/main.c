#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");

    float capital = 500, montante, juros, jurostempo;
    juros = 1 + 0.01;
    jurostempo = pow(juros, 3);
    montante = capital*jurostempo;

    printf("O lucro após 3 meses é de R$%.2f\n",montante);
    return 0;
}
