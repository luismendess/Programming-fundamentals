//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  //setlocale que permite acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração das variáveis
  float soma, media;
  int vetor[20], v, iguais=0, maiormedia=0, igualmedia=0;
  //estrutura de repetição para inserção de valores até 20 vezes
  for(v = 0; v < 20; v++){
    printf("Insira o %iº valor vetor: ", v+1);
    scanf("%i", &vetor[v]);
    //soma de todos os valores inseridos
    soma += vetor[v];
  }
  //cálculo da média de todos os valores inseridos
  media = soma / 20;
  //estrutura de repetição para verificação dos 20 valores
  for(v = 0; v < 20; v++){
    //verifica se algum valor do vetor é igual a 30
    if(vetor[v] == 30){
      iguais++;
    }//if
    //verifica se algum valor do vetor é maior que a média
    if(vetor[v] > media){
      maiormedia++;
    }//if
    //verifica se algum valor é igual a média
    if(vetor[v] == media){
      igualmedia++;
    }//if
  }//for
  printf("\n%i números são iguais a 30.\n", iguais);
  printf("%i números são maiores que à média.\n", maiormedia);
  printf("%i números são iguais à média.\n\n", igualmedia);

return 0;
}//main
