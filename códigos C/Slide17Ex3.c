//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//estrutura para informações de Bandas
typedef struct{
  char nome[50];
  char genero[50];
  int integrantes;
  int posicao;
}Bandas;
//função para inserir os valores das 5 bandas
void preenchebandas(Bandas bandas[5]){
  //passa por todas as posições do vetor
  for(int i = 0; i < 5; i++){
    //pede o nome
    printf("Digite o nome da banda: ");
    fgets(bandas[i].nome, 50, stdin);
    bandas[i].nome[strcspn(bandas[i].nome, "\n")] = '\0';
    fflush(stdin);
    //pede o Gênero
    printf("Digite o Gênero da sua banda: ");
    fgets(bandas[i].genero, 50, stdin);
    bandas[i].genero[strcspn(bandas[i].genero, "\n")] = '\0';
    fflush(stdin);
    //pede o número de integrantes da banda
    printf("Digite o número de integrantes: ");
    scanf("%i", &bandas[i].integrantes);
    fflush(stdin);
    //pede a posição no ranking pessoal
    printf("Digite a posição do seu top 5 bandas favoritas: ");
    scanf("%i",&bandas[i].posicao);
    fflush(stdin);
    printf("\n");
  }//for
  //repetição para Exibir as 5 bandas inseridas
  for(int i = 0; i < 5; i++){
    printf("Nome: %s\n",bandas[i].nome);
    printf("Gênero Musical: %s\n",bandas[i].genero);
    printf("Número de Integrantes: %i\n",bandas[i].integrantes);
    printf("Posição entre as favoritas: %i\n",bandas[i].posicao);
    printf("\n");
}//for exibindo todas bandas
  return;
}//função preenchebanda
//função para pedir a posição do raking e exibi-lo
void escolheposicao(int* p) {
  printf("Digite uma posição do seu ranking de bandas: ");
  scanf("%i", &*p);
  fflush(stdin);
  //retorna o valor inserido
  return;
}//funcao escolhegenero
//função para pedir o gênero musical que quiser listar
char escolhegenero(char estilo[50]){
    printf("\nInforme um Gênero Musical: ");
    fgets(estilo, 50, stdin);
    estilo[strcspn(estilo, "\n")] = '\0';
    fflush(stdin);
    //retorna o o Gênero inserido
    return estilo[50];
}//funcao escolhegenero
//função para pedir o nome da banda que quiser listar
char nomebanda(char nome_banda[50]){
    printf("\nInsira o nome da Banda: ");
    fgets(nome_banda, 50, stdin);
    nome_banda[strcspn(nome_banda, "\n")] = '\0';
    fflush(stdin);
    //retorna o nome da banda inserido
    return nome_banda[50];
}/// funcao nomebanda
//função principal do código
int main(){
  //permite o uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  int p, i, opcao;
  char estilo[50], nome_banda[50];
  Bandas bandas[5];
  printf("-------------------------------\n");
  printf("Insira informações de 5 bandas:\n\n");
  printf("-------------------------------\n");
  //chama a função preenchebandas para a função principal
  preenchebandas(bandas);
  //estrutura para pedir alguma opção enquanto quiser que funcione
  do {
  printf("\n");
  printf("|--------------------------------------------|\n");
  printf("|               Menu de Opções               |\n");
  printf("|--------------------------------------------|\n");
  printf("|      1 - Exibir por Posição no Ranking     |\n");
  printf("|         2 - Exibir Lista por Genero        |\n");
  printf("|     3 - Exibir Lista por Nome da Banda     |\n");
  printf("|           4 - Fechar o programa            |\n");
  printf("|--------------------------------------------|\n");
  printf("Digite a opção desejada: ");
  scanf("%i", &opcao);
  printf("\n");
  fflush(stdin);
  //estrutura de seleção para escolher o que quer fazer com as informações
  switch(opcao){
    //opção 1
    case 1:
    //chama a função escolheposicao para comparar e exibir a posição escolhida
    escolheposicao(&p);
    //verifica se está dentro do intervalo do top 5
    if(p > 0 && p < 6){
      //verifica todas as posições do vetor
      for (int i = 0; i < 5; i++) {
        //verifica em qual das posições está o valor informadoo
        if(p == bandas[i].posicao){
          printf("Nome: %s\n",bandas[i].nome);
          printf("Genero musical: %s\n",bandas[i].genero);
          printf("Numero de integrantes: %i\n",bandas[i].integrantes);
          printf("Posicao entre as favoritas: %i\n",bandas[i].posicao);
        }//if interno
      }//for
    }else{
      //se estiver fora do intervalo, exibe mensagem de erro
      printf("Valor inválido!!\n");
    }//else
    break;
    //opção 2
    case 2:
    //chama a função escolhegenero para a função principal
    escolhegenero(estilo);
    //verifica todas as posições do vetor
    for (i = 0; i < 5; i++) {
      //se o o valor informado for igual a algum gênero salvo, exibe os que o tiverem
      if (strcasecmp(estilo,bandas[i].genero) == 0) {
        printf("Nome: %s\n",bandas[i].nome);
        printf("Genero musical: %s\n",bandas[i].genero);
        printf("Numero de integrantes: %i\n",bandas[i].integrantes);
        printf("Posicao entre as favoritas: %i\n\n",bandas[i].posicao);
      }//if
    }//for
    break;
    //opção 3
    case 3:
    //chama a função nomebanda para a função principal
    nomebanda(nome_banda);
    //verifica todas as posições do vetor
    for (i = 0; i < 5; i++) {
      //verifica qual banda tem o nome igual ao informado e exibe suas informações
      if (strcasecmp(nome_banda,bandas[i].nome) == 0) {
        printf("Nome: %s\n",bandas[i].nome);
        printf("Genero musical: %s\n",bandas[i].genero);
        printf("Numero de integrantes: %i\n",bandas[i].integrantes);
        printf("Posicao entre as favoritas: %i\n\n",bandas[i].posicao);
      }//if
    }//for
    break;
    //opção 4
    case 4:
    //exibe mensagem de encerramento
    printf("Encerrando o programa. . . \n\n");
    return 0;
    break;
    //caso a opção inserida esteja fora do intervalo aceito, exibe mensagem de Encerrando
    default:
    printf("Opção Inválida!!\n");
    break;
  }//switch
} while(opcao != 4);
  return 0;
}//main
