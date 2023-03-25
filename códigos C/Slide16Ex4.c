//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//função para receber uma média e verificar qual o respectivo conceito
float mediafinal(float media){
  //declaração de variáveis
  char conceito;

  printf("Insira a média final do Aluno: ");
  scanf("%f", &media);
  //verifica o intervalo ao qual a media final pertence
  if(media >= 9 && media <= 10){
    //insere o valor A em conceito
    conceito = 'A';
  } else if (media >= 7 && media <= 8){
    //insere o valor B em conceito
    conceito = 'B';
  } else if (media >= 5 && media <= 6){
    //insere o valor C em conceito
    conceito = 'C';
  } else if (media >= 0 && media <= 4){
    //insere o valor D em conceito
    conceito = 'D';
  }else{
    printf("A média inserida é inválida\n\n");
  }//else
  //retorna o valor de conceito
  return conceito;
}//mediafinal
//função principal do código
int main(){
  //permite o uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  float media;
  char conceito;
  //insere o valor da função mediafinal em conceito
  conceito = mediafinal(media);
  printf("\nO conceito do aluno é: %c\n\n", conceito);

  return 0;
}//main
