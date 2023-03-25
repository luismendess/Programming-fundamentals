//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//função que recebe um valor e calcula seu fatorial
int fatorial(int numero){
  //declaração de variáveis
  int fat = 1;

  printf("Insira um valor, para calcularmos o fatorial: ");
  scanf("%i", &numero);
  //repetição, que multiplica e diminui o valor em 1 em looping, até chegar em 1
  while(numero > 0){
    fat *= numero;
    numero--;
  }//while
  //retorna o valor final do looping em fat
  return fat;
}//fatorial
//função principal do código
int main(){
  //permite o uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  int numero, fat;
  //insere o valor da função fatorial em fat
  fat = fatorial(numero);
  printf("\nO fatorial do valor inserido é: %i\n\n", fat);

  return 0;
}//main
