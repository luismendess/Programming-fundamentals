//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  //setlocale que permite acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração das variáveis
  int vetorA[10], vetorB[10], v=0;
  //estrutura de repetição, para receber 5 valores para o vetor A
  for(v = 0; v < 10; v++){
    printf("Informe o %i valor a ser calculado: ", v+1);
    scanf("%i", &vetorA[v]);
  }//for vetor A
  printf("\nO quadrado dos valores do vetor é: \n\n");
  printf("|");
  for(v = 0; v < 10; v++){
    vetorB[v] = vetorA[v] * vetorA[v];
    printf(" %i |", vetorB[v]);
  }//for vetor B
  printf("\n\n");

return 0;
}//main
