/*3) Faça um programa que solicite o tamanho de um quadrado e mostre a borda de
um quadrado utilizando o caracter #. */

#include <stdio.h>
#include <stdlib.h>


int main(){

  int i, j, tamanho;

  printf("Insira o tamanho do quadrado: ");
  scanf("%i", &tamanho);


  for (i = 0; i < tamanho; i++) {
    printf("\n");
    for (j = 0; j < tamanho; j++) {
      if(i == 0 || j == 0 || i == tamanho-1 || j == tamanho-1){
        printf(" #");
      }else{
        printf("  ");
      }//else
    }//for interno
  }//for externo
  printf("\n\n");

return 0;
}//main
