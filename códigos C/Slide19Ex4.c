//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  //função principal do código
  int main(){
    //permite o uso de acento e ç
    setlocale(LC_ALL, "portuguese");

    int vetor[5], i = 0;
    int *ponteiro = vetor;

    for(i; i < 5; i++){
      printf("Insira o %iº valor: ", i+1);
      scanf("%d", &vetor[i]);
      vetor[i] = vetor[i] * 2;
    }//for
    printf("\n");
    for(i = 0; i < 5; i++){
      printf("O %iº valor multiplicado por 2: %i\n", i+1, vetor[i]);
    }//for
    printf("\n");
    for(i = 0; i < 5; i++){
      if(vetor[i]%2 == 0){
        printf("O endereço é: %p\n", (ponteiro + i));
      }//if
    }//for
    printf("\n");

    return 0;
  }//main
