#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

  setlocale(LC_ALL, "portuguese");

  int tamanho;
  int *vetor;

  printf("Informe o tamanho do vetor: ");
  scanf("%d", &tamanho);

  vetor = (int*) malloc(tamanho * sizeof(int));

  for(int i = 0; i < tamanho; i++){
  printf("Digite o %iº valor do vetor: ", i+1);
  scanf("%i", &vetor[i]);
}//for
  printf("\n");
  for (int i = 0; i < tamanho; i++) {
  printf("%i\n", vetor[i]);
}//for
  free(vetor);
  return 0;
}//main
