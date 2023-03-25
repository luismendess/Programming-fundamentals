//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

typedef struct{
  char nome[31];
  char profissao[21];
  char sexo[2];
  int ano;
}pessoas;

void convertenome(int n){
  pessoas pessoa[5];
  int i = 0;
  for(i = 0; i < 5; i++){
  printf("Informe o nome da %i pessoa: ", i+1);
  fgets(pessoa[i].nome, 31, stdin);
  pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0';
  //limpa o buffer, melhor função em windows
  fflush(stdin);
  }//for
  pessoa[i].nome[0] = toupper(pessoa[i].nome[0]);
  for(int n = 0; n < 31; n++){
      if(pessoa[i].nome[n] == ' '){
        pessoa[i].nome[n+1] = toupper(pessoa[i].nome[n+1]);
      }//if
    }//for

}//função convertenome


int main(){
  setlocale(LC_ALL, "portuguese");

  pessoas pessoa[5];
  int n, i = 0;

  convertenome(n);
  for(i = 0; i < 5; i++){
  printf("%s\n", pessoa[i].nome);
}
  return 0;
}//main
