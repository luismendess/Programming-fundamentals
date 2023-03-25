//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  //função principal do código
  int main(){
    //permite o uso de acento e ç
    setlocale(LC_ALL, "portuguese");
    float matriz[3][3];
    //passa por cada posição do vetor
    for(int i = 0; i < 3; i++){
      printf("\nO %iº grupo de endereços é: \n", i+1);
      for(int j = 0; j < 3; j++){
      //exibe o endereço de cada posição do vetor
      printf("o endereço %i é: %p\n",j+1, &matriz[i][j]);
    }//for interno
    }//for externo
    printf("\n");

    return 0;
  }//main
