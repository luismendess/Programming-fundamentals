//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva uma função que receba como parâmetro um valor L e um valor C e retorne
o ponteiro para uma matriz alocada dinamicamente contendo L linhas e C colunas.
Essa matriz deve ser inicializada com o valor 0 em todas as suas posições.*/

int **aloca_matriz (int *linha, int *coluna, int **matriz){

   matriz = (int **) malloc( *linha * sizeof(int*));
   for (int i = 0; i < *linha; i++){
   matriz[i] = (int *) malloc( *linha * sizeof(int));
  }// for
  return matriz;
}//receber parametro

int limpar_matriz(int *linha, int **matriz){
  for (int l = 0; l < *linha ; l++){
 free(matriz[l]);
  }// for
  free(matriz);
}//limpar_matriz
//função main
int main(){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int **matriz;
int linha, coluna;

printf("Digite a quantidade de linhas para matriz:\n");
scanf("%i",&linha);

printf("Digite a quantidade de colunas para matriz:\n");
scanf("%i",&coluna);

aloca_matriz (&linha, &coluna, matriz);
limpar_matriz(&linha, matriz);

return 0;
}//main
