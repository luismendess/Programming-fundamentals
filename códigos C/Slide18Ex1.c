//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  int mult(int x, int y){
    int soma = 0;
    //caso base
    if (x == 0 || y == 0){
      //returna 0 para o caso base
      return 0;
    } else {
      //retorno da função para valores que não sejam do caso base
      return y + mult(x-1, y);
    }//else
  }//função mult

  //função principal do código
  int main(){
    //permite o uso de acento e ç
    setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
    int x, y, resultado;

    printf("Insira o valor de X:");
    scanf("%i", &x);
    printf("Insira o valor de Y:");
    scanf("%i", &y);
    resultado = mult(x, y);
    printf("\n%i\n\n", resultado);
    return 0;
}//main
