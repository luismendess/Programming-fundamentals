//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
  float x;
  float y;
}coordenadas;

int main(){
  //permite uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  // declarando variaveis
  coordenadas ponto_1, ponto_2;
  float distancia;

// recebendo os valores para x e y.
  printf("Insira um valor para a coordenada 1 de X: ");
  scanf("%f", &ponto_1.x);
  printf("Insira um valor para a coordenada 1 de Y: ");
  scanf("%f", &ponto_1.y);
  printf("Insira um valor para a coordenada 2 de X: ");
  scanf("%f", &ponto_2.x);
  printf("Insira um valor para a coordenada 2 de Y: ");
  scanf("%f", &ponto_2.y);
// calculando a distancia entre os pontos.
  distancia = sqrt(pow(ponto_2.x-ponto_1.x,2) + (pow(ponto_2.y-ponto_1.y,2)));
//exibe
  printf("A distancia entre os dois pontos é: %.2f\n\n", distancia);

  return 0;
}//main
