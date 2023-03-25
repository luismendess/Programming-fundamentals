//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
  //permite o uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  int l, c, matrizA[2][3] = {{3, 7, 10}, {1, 5, 0}}, matrizB[2][3] = {{2, 3, 4}, {6, 0, 2}};
  int matrizC[2][3];
  //repete o cálculo de cada posição por 5
  for(l = 0; l < 2; l++){
    for (c = 0; c < 3; c++){
      //soma o valor de cada posição igual da matriz A e B e insere em C
      matrizC[l][c] = matrizA[l][c] + matrizB[l][c];
    }//for interno
  }//for externo
  printf("Matriz C, gerada a partir da matriz A e B é:\n");
  //verifica o valor de cada posição para a exibição
  for(l = 0; l < 2; l++){
    printf("\n");
    printf("|");
		for (c = 0; c < 3; c++){
      //exibe a matriz C que está com os valores já somados
      printf(" %i |", matrizC[l][c]);
    }//for interno
  }//for externo
printf("\n\n");

return 0;
}//main
