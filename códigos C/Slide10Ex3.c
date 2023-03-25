//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setlocale usado para poder usar o ç e acentos
    setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
    int numeros;
    //estrutura for de repetição, que começa em 1, e faz uma contagem até 500
    for (numeros = 1; numeros <=500; numeros++) {
      //condicional que verifica se o número é múltiplo de 5
      if(numeros%5 == 0){
      printf("%i\n", numeros);
      }
    }
return 0;
}
