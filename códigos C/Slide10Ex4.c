//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setlocale usado para poder usar o ç e acentos
    setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
    int numeros;
    //estrutura for de repetição, que começa em 1, e faz uma contagem até 100
    for (numeros = 240; numeros <=730; numeros++) {
      if(numeros%2 == 0){
      printf("%i\n", numeros);
      }
    }
return 0;
}
