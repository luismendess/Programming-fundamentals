//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*Escreva um programa que leia do usuário o nome de um arquivo
texto. Em seguida, mostre na tela quantas linhas esse arquivo possui.*/

//função main
int main(){
  //para poder utilizar acentos
  setlocale(LC_ALL, "portuguese");
//declaração de variáveis
  char arquivo[20];
  int cont_linha = 1;
  char conta = 0;
  //pede para o usuário escrever o nome do arquivo
  printf("Digite o nome de um arquivo de texto: ");
  fgets(arquivo, 20, stdin);
  //Subscreve o \n por \0
  arquivo[strcspn(arquivo,"\n")] = '\0';
  //Limpa o buffer do teclado
  setbuf(stdin, NULL);
  FILE *arq = fopen(arquivo, "r");
  //verificar se o arquivo está no diretorio correto
  if(arq == NULL){
    perror("Erro ao abrir arquivo! ");
    printf("\n");
    exit(1);
  }//if
  //looping para percorrer o arquivo
  while((conta = fgetc(arq)) != EOF){
    if(conta == '\n'){
      cont_linha++;
    }//if
  }//while
  printf("O número de linhas é  : %i\n", cont_linha);
  fclose(arq);

return 0;
}//main
