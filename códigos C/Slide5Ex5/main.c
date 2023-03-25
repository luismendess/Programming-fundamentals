#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    double valor, raiz;

    printf("Por favor, informe o valor para achar a raíz quadrada: ");
    scanf("%lf", &valor);

    raiz = sqrt(valor);

    printf("\nA raíz quadrada desse valor é: %.2lf.\n\n", raiz);
    return 0;
}
