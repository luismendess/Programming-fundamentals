//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Escreva um programa que leia do usuário os nomes de dois
arquivos texto. Crie um terceiro arquivo texto com o conteúdo dos
dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do
segundo).*/

void concatenar_arquivos( FILE *alterar, FILE *copia){
  char alterar_arquivo [1000];

  while (fgets (alterar_arquivo, sizeof alterar_arquivo, copia) != NULL){
    fputs (alterar_arquivo, alterar);
  }//while
}//contatenar_arquivos

//função main
int main(){
  //para poder utilizar pontuações
  setlocale(LC_ALL, "");
  //declaração de variáveis
  char arquivo1[400];
  char arquivo2[400];
  //solicita o nome do primeiro arquivo
  printf("Digite o nome do primeiro arquivo de texto: ");
  fgets(arquivo1, 400, stdin);
  //Subscreve o \n por \0
  arquivo1[strcspn(arquivo1,"\n")] = '\0';
  //Limpa o buffer do teclado
  setbuf(stdin, NULL);
  //verificação se o arqivo está no diretório
  //solicita o nome do segundo arquivo
  printf("Digite o nome do segundo arquivo de texto: ");
  fgets(arquivo2, 400, stdin);
  //Subscreve o \n por \0
  arquivo2[strcspn(arquivo2,"\n")] = '\0';
  //Limpa o buffer do teclado
  setbuf(stdin, NULL);
  //verificação se o arqivo está no diretório
  //abrindo arquivos
  FILE *arq1 = fopen(arquivo1, "r");
  FILE *arq2 = fopen(arquivo2, "r");
  FILE *arq3 = fopen("teste3.txt", "a");
  //verificando se o arquivo está no diretório
  if(arq1 == NULL){
    perror("Erro ao abrir arquivo 1!");
    printf("\n");
    exit(1);
  }//if
  //verificando se o arquivo está no diretório
  if(arq2 == NULL){
    perror("Erro ao abrir arquivo 2!");
    printf("\n");
    exit(1);
  }//if
  //verificando se o arquivo está no diretório
  if(arq3 == NULL){
    perror("Erro ao abrir arquivo 2!");
    printf("\n");
    exit(1);
  }//if
  //concatenado arquivo 1 e 3
  concatenar_arquivos(arq3, arq1);
  //concatenando arquivo 2 e 3
  concatenar_arquivos(arq3, arq2);
  //fechando os arquivos após lê-los e modificá-los
  fclose (arq1);
  fclose (arq2);
  fclose (arq3);

return 0;
}//main
