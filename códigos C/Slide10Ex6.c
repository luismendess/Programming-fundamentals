//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    //setlocale usado para poder
    setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
    int contador, valor, quadrado;
    //estrutura for de repetição, que começa em 1, incrementa num contador até 10
    for (contador = 1; contador <=10; contador++) {
      printf("Por favor, insira um valor para calcular seu quadrado: ");
      scanf("%i", &valor);
      quadrado = valor * valor;
      printf("\nO quadrado é: %i\n\n", quadrado);
    }

return 0;
}
