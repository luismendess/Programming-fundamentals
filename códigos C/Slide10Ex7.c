//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setlocale usado para poder
    setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
    int a = 0, b = 1, valores, soma, contador;

    printf("Informe quantos termos de Fibonacci deverão ser exibidos: ");
    scanf("%i", &valores);
    printf("\n");//usado para pular uma linha do resultado
    //contador para repetir quantas vezes o usuário digitar
    for (contador = 1;  contador <= valores; contador++) {
      soma = a + b;
      printf("O %iº valor da sequência é: %i\n\n",contador, soma);
      //inversão de valores para pode realizar a sequência
      b = a;
      a = soma;
    }
return 0;
}
