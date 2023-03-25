//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setlocale usado para poder
    setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
    int multiplicando, multiplicador, resultado;
    //estrutura de repetição para exibir 10 vezes o valor da tabuada
    for(multiplicador = 1; multiplicador <= 10; multiplicador++){
      printf("\nTabuada do %i:\n", multiplicador);
      //estrutura de repetição que exibirá os 10 valores que irão multiplicar
      for(multiplicando = 1; multiplicando <= 10; multiplicando++){
        resultado = multiplicador * multiplicando;
        printf("%i x %i = %i\n", multiplicador, multiplicando, resultado);
      }
    }

return 0;
}
