//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  //setlocale que permite acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração das variáveis
  int idades[10], v=0, maior=0;
  //estrutura de repetição, para receber 10 valores para o vetor idades
  for(v = 0; v < 10; v++){
    //pede as idades a serem colocadas no vetor
    printf("Insira a %iª idade: ", v+1);
    scanf("%i", &idades[v]);
    //verifica se o valor inserido é maior que 35 e adiciona um no contador
    if(idades[v] > 35){
      maior++;
    }else{}//else
  }//for
  //exibe o resultado
  printf("\nSão %i pessoas com mais de 35 anos\n\n", maior);

return 0;
}//main
