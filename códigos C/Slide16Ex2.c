//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//função para receber os valores, verificar se é homem ou mulher e calcular peso ideal
int pesoideal(char sexo, float altura, float peso_ideal){

  printf("Insira seu gênero (ex: M, F): ");
  scanf("%s", &sexo);
  printf("Insira sua altura: ");
  scanf("%f", &altura);
  //verifica se é homem ou mulher
  if(sexo == 'M' || sexo == 'm'){
    //calcula o peso ideal a partir da altura recebida
    peso_ideal = (72.7 * altura) - 58;
  }else if(sexo == 'F' || sexo == 'f'){
    //calcula o peso ideal a partir da altura recebida
    peso_ideal = (62.1 * altura) - 44.7;
  }else{
    printf("Gênero inválido!!\n");
  }//else
  //retorna o peso_ideal
  return peso_ideal;
}//pesoideal
//função principal do código
int main(){
  //permite uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  char sexo;
  float peso_ideal, altura;
  //insere em peso_ideal os valores da função pesoideal
  peso_ideal = pesoideal(sexo, altura, peso_ideal);
  printf("\nSeu peso ideal é: %.2f\n\n", peso_ideal);

  return 0;
}//main
