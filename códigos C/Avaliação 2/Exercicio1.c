//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função principal do código
int main(){
  //permite o uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração de varíaveis
  int cidade[4][5], i, j, caixa, ampola, somapopulacao = 0, somalinha = 0, somacoluna[5], comparacoluna, menorcoluna;
  //repetição para inserção de valores nas posições da matriz
  for(i = 0; i < 4; i++){//linha
    for(j = 0; j < 5; j++){//coluna
      //do while para repetir se o valor digitador for menor que 0
      do{
      printf("Insira a quantidade de pessoas desta área: ");
      scanf("%i", &cidade[i][j]);
      }while(cidade[i][j] < 0);
      //soma os valores inseridos, para determinar a população da cidade
      somapopulacao += cidade[i][j];
    }//for interno
  }//for externo
  //calcula quantas caixas a cidade deve receber
  caixa = somapopulacao / 50;
  //acrescenta em 1, caso a conta acima de um valor quebrado
  if((somapopulacao % 50) > 0){
    caixa++;
  }//if
  //exibe quantas caixas a cidade deve receber
  printf("A quantidade mínima de caixas necessárias é: %i\n", caixa);
    //repetição para somar a linha 2
    for(j = 0; j < 5; j++){
      somalinha += cidade[1][j];
      //calcula quantas ampolas a linha 2 vai usar
      ampola = somalinha / 5;
      //acrescenta em 1, caso a conta acima de um valor quebrado
      if ((somalinha % 5) > 0) {
        ampola++;
      }//if
  }//for externo
  //exibe quantas ampolas a linha 2 precisará
  printf("A quantidade mínima de ampolas necessárias na linha 2 é: %i\n", ampola);
  //repetição para somar os valores de cada coluna
  for(i = 0; i < 4; i++){
    for(j = 0; j < 5; j++){
      //soma os valores de cada coluna
      somacoluna[j] += cidade[i][j];
    }//for interno
  }//for externo
  //verifica se a coluna 1 é menor que todas as outras
  if(somacoluna[0] < somacoluna[1] && somacoluna[0] < somacoluna[2] && somacoluna[0] < somacoluna[3] && somacoluna[0] < somacoluna[4]){
    //insere o valor da coluna 1 em comparacoluna
    menorcoluna = somacoluna[0];
    //atribui o valor 1 para a coluna, caso entre nessa condição
    comparacoluna = 1;
    //verifica se a coluna 2 é menor que todas as outras
  }else if(somacoluna[1] < somacoluna[0] && somacoluna[1] < somacoluna[2] && somacoluna[1] < somacoluna[3] && somacoluna[1] < somacoluna[4]){
    //insere o valor da coluna 2 em comparacoluna
    menorcoluna = somacoluna[1];
    //atribui o valor 2 para a coluna, caso entre nessa condição
    comparacoluna = 2;
    //verifica se a coluna 3 é menor que todas as outras
  }else if(somacoluna[2] < somacoluna[0] && somacoluna[2] < somacoluna[1] && somacoluna[2] < somacoluna[3] && somacoluna[2] < somacoluna[4]){
    //insere o valor da coluna 3 em comparacoluna
    menorcoluna = somacoluna[2];
    //atribui o valor 3 para a coluna, caso entre nessa condição
    comparacoluna = 3;
    //verifica se a coluna 4 é menor que todas as outras
  }else if(somacoluna[3] < somacoluna[0] && somacoluna[3] < somacoluna[1] && somacoluna[3] < somacoluna[2] && somacoluna[3] < somacoluna[4]){
    //insere o valor da coluna 4 em comparacoluna
    menorcoluna = somacoluna[3];
    //atribui o valor 4 para a coluna, caso entre nessa condição
    comparacoluna = 4;
    //verifica se a coluna 5 é menor que todas as outras
  }else if(somacoluna[4] < somacoluna[0] && somacoluna[4] < somacoluna[1] && somacoluna[4] < somacoluna[2] && somacoluna[4] < somacoluna[3]){
    //insere o valor da coluna 5 em comparacoluna
    menorcoluna = somacoluna[4];
    //atribui o valor 5 para a coluna, caso entre nessa condição
    comparacoluna = 5;
  }//if externo
  //exibe a coluna com menor função
  printf("A coluna com menos pessoas é a coluna %i.\n", comparacoluna);
    //calcula quantas ampolas a coluna precisará
    ampola = menorcoluna / 5;
    //arredonda para cima o valor, caso seja um número quebrado
    if ((menorcoluna % 5) > 0) {
      ampola++;
    }//if
    //exibe quantas ampolas a coluna precisará
    printf("a coluna precisa de %i ampolas para vacinar todos.\n", ampola);

  return 0;
}//main
