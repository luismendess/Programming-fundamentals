/*1) Crie um algoritmo que imprima uma tabela de conversão de polegadas para centímetros.
Deseja-se que na tabela conste valores de 1 polegada até 20 polegadas inteiras.
(Para isso considere: 1 polegada = 2,54 cm)
Exemplo de saída:
1” equivale a 2,54 cm
2” equivalem a 5,08 cm
3” equivalem a 7,62 cm*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float centimetros;

  for(int i = 1; i < 21; i++){
    centimetros = i * 2.54;
    printf("%i” em centimetros é: %.2f \n", i, centimetros);
  }//for
  printf("\n\n");
return 0;
}//main