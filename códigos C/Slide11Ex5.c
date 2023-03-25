//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
  //setlocale que permite acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração das variáveis
  int vetorA[4], vetorB[5], a, b;
  //estrutura de repetição, para receber 4 valores para o vetor A
  for(a = 0; a < 4; a++){
    printf("Insira o %iº valor do 1º vetor: ", a+1);
    scanf("%i", &vetorA[a]);
  }//for vetor A
  printf("\n");
  //estrutura de repetição, para receber 5 valores para o vetor B
  for(a = 0; a < 5; a++){
    printf("Insira o %iº valor do 2º vetor: ", a+1);
    scanf("%i",&vetorB[a]);
  }//for vetor B
  printf("\n");
  for(a = 0; a < 5; a++){
    for(b = 0; b < 4; b++) {
      //compara os valores dos dois vetores
      if(vetorB[a] == vetorA[b]){
      printf("%i está nos dois vetores\n",vetorA[b]);
    }//for interno
  }//for externo
  printf("\n");

return 0;
}//main
