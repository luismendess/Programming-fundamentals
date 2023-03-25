//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setlocale usado para poder usar o ç e acentos
    setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
    int contador;
    //estrutura for de repetição, que começa em 100, e reduz uma contagem até 1
    for (contador = 100; contador >=1; contador--) {
      printf("%i\n", contador);
    }

return 0;
}
