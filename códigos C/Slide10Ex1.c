//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setlocale usado para poder
    setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
    int contador;
    //estrutura for de repetição, que começa em 1, e faz uma contagem até 100
    for (contador = 1; contador <=100; contador++) {
      printf("%i\n", contador);
    }

return 0;
}
