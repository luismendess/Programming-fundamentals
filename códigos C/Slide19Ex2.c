//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  //função principal do código
  int main(){
    //permite o uso de acento e ç
    setlocale(LC_ALL, "portuguese");
    float vetor[10];
    //passa por cada posição do vetor
    for(int i = 0; i < 10; i++){
      //exibe o endereço de cada posição do vetor
      printf("o endereço é: %p\n", &vetor[i]);
    }//for
    printf("\n");

    return 0;
  }//main
