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


void nomeeidade(pessoas pessoa[5], int idade){
  int i;
  idade = 2021 - pessoa[i].ano;

}//função nome e idade;

int main(){

  setlocale(LC_ALL, "portuguese");

  int i = 0, idade, maisvelho, maisvelho1;
  pessoas pessoa[5];


  for(i = 0; i < 5; i++){
  printf("Informe o nome da %i pessoa: ", i+1);
  fgets(pessoa[i].nome, 31, stdin);
  pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0';
  //limpa o buffer, melhor função em windows
  fflush(stdin);
  printf("Informe a profissão de %s: ", pessoa[i].nome);
  fgets(pessoa[i].profissao, 21, stdin);
  pessoa[i].profissao[strcspn(pessoa[i].profissao, "\n")] = '\0';
  //limpa o buffer, melhor função em windows
  fflush(stdin);
  printf("Informe o sexo (ex: M ou F) de %s: ", pessoa[i].nome);
  scanf("%s", &pessoa[i].sexo);
  fflush (stdin);
  printf("Informe o no de nascimento de %s: ",pessoa[i].nome);
  scanf("%i", &pessoa[i].ano);
  fflush(stdin);
  }//for
  //questão A
  pessoa[i].nome[0] = toupper(pessoa[i].nome[0]);
  for(int n = 0; n < 31; n++){
      if(pessoa[i].nome[n] == ' '){
        pessoa[i].nome[n+1] = toupper(pessoa[i].nome[n+1]);
      }//if
      //questão B
      idade = 2021 - pessoa[i].ano;
      if(strcmp(pessoa[i].sexo, 'F')  ||strcmp(pessoa[i].sexo, 'f') && idade > 60){
        strcat(str, " Vacinada");
      }else if(strcmp(pessoa[i].sexo, 'M') || strcmp(pessoa[i].sexo, 'm') && idade > 60){
        strcat(pessoa[i].nome, " Vacinado");
      }//else
    }//for
    //questão C
    printf("|             Nome             |      Profissão     | Sexo | Ano de Nascimento |\n");
    printf("--------------------------------------------------------------------------------\n");
    for ( i = 0; i < 5; i++) {
      printf("| %s | %s | %s | %i |\n", pessoa[i].nome, pessoa[i].profissao, pessoa[i].sexo, pessoa[i].ano);
      printf("--------------------------------------------------------------------------------\n");
    }//for
    for(maisvelho = 0; maisvelho < 5; maisvelho++){
      if(idade > idade+1){
        idade1 = idade;
        maisvelho1 = maisvelho;
      }//if
    } //for
  printf("Pessoa mais velha: %s: ", pessoa[k1].nome);
  printf("Idade do mais velho %i: ", idade[k1]);

  return 0;
}//main
