//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
//enumeração de dados
typedef enum {BRASILEIRO = 1, ESTRANGEIRO} TipoDocumento;
//estrutura de dados para diferentes variáveis
typedef struct{
  char nome[50];
  int idade;
  float peso;
  int dia;
  int mes;
  int ano;
  TipoDocumento nacionalidade;
  union{
    char cpf[12];
    char passaporte[13];
  }documento;
}cadastro;
//função principal
int main(){
    //permite uso de acento e ç
    setlocale(LC_ALL, "portuguese");
    //declaração de dados
    cadastro pessoa[5];
    int i = 0;
    //pede inserção dos valores 5 vezes
    for(i = 0; i < 5; i++){
      //pede nome
      printf("Insira o nome da %iº pessoa: ", i+1);
      fgets(pessoa[i].nome, 50, stdin);
      pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0';
      //limpa o buffer, melhor função em windows
      fflush(stdin);
      //pede idade
      printf("Insira a idade da %iº pessoa: ", i+1);
      scanf("%d", &pessoa[i].idade);
      fflush(stdin);
      //pede peso
      printf("Insira o peso da %iº pessoa: ", i+1);
      scanf("%f", &pessoa[i].peso);
      fflush(stdin);
      //pede data de nascimento
      printf("Insira a data de nascimento da %iº pessoa (Ex: dd/mm/aaaa): ", i+1);
      scanf("%d/%d/%d", &pessoa[i].dia, &pessoa[i].mes, &pessoa[i].ano);
      fflush(stdin);
      //pula a linha para exibir melhor a tabela
      printf("\n");
      //tabela que pede a nacionalidade
      printf("-------Menu de Opção de Nacionalidade--------\n");
      printf("|        *Indique sua nacionalidade*        |\n");
      printf("|               1 - BRASILEIRO              |\n");
      printf("|               2 - ESTRANGEIRO             |\n");
      printf("---------------------------------------------\n");
      //indica onde inserir o valor
      printf("Insira aqui: ");
      scanf("%i", &pessoa[i].nacionalidade);
      fflush(stdin);
      //da um espaçamento entre a tabela e as próximas inserções
      printf("\n");
      //switch para verificar a nacionalidade
      switch (pessoa[i].nacionalidade) {
        //caso seja brasileiro, ou 1, como inserido
        case BRASILEIRO:
          //pede o CPF
          printf("Insira o CPF: ");
          fgets(pessoa[i].documento.cpf, 12, stdin);
          pessoa[i].documento.cpf[strcspn(pessoa[i].documento.cpf, "\n")] = '\0';
          fflush(stdin);
          break;
        //caso seja estrangeiro, ou 2, como inserido
        case ESTRANGEIRO:
          //pede o passaporte
          printf("Insira o Passaporte: ");
          fgets(pessoa[i].documento.passaporte, 13, stdin);
          pessoa[i].documento.passaporte[strcspn(pessoa[i].documento.passaporte, "\n")] = '\0';
          fflush(stdin);
          break;
        //caso o valor inserido não seja 1 ou 2
        default:
          printf("Você digitou uma opção inválida!\n");
          break;
      }//switch
      //pula a linha entre cada vez que o código repetir
      printf("\n");
    }//for
    //limpa o terminal, para fazer a exibição
    system("cls");
    //repetição para exibir cada um dos 5 valores
    for(i = 0; i < 5; i++){
      //exibe o nome, a idade e o peso
      printf("\nA(o) %s tem %i anos, pesa %.2fKg, \n", pessoa[i].nome, pessoa[i].idade, pessoa[i].peso);
      //exibe a data de nascimento
      printf("nasceu em %d/%d/%d, é ", pessoa[i].dia, pessoa[i].mes, pessoa[i].ano);
      //verifica o valor inserido na tabela, se for 1 exibe CPF, se for 2, passaporte
      if(pessoa[i].nacionalidade == 1){
        printf("Brasileiro \ne seu CPF é %s.\n", pessoa[i].documento.cpf);
        //adiciona um delay entre as exibições, para o caso de CPF
        Sleep(350);
        //adiciona um beep, quando a última inserção de documento for CPF
        puts("\a");
      }else{
        printf("Estrangeiro \ne seu passaporte é %s.\n", pessoa[i].documento.passaporte);
        //adiciona um delay entre as exibições, para o caso de passaporte
        Sleep(350);
        //adiciona um beep, quando a última inserção de documento for passaporte
        puts("\a");
      }//else
    }//for
    printf("\n\n");
return 0;
}//main
