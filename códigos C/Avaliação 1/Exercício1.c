//implementação de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//iniciação da função main
int main (){
  //setlocale, que permite a utilização de acentos e ç no código
  setlocale (LC_ALL, "portuguese");
  //declaração de variáveis
  float preco;
  int quantidade;
  char opcao, caracter;
  //menu para pedir que o usuário insira a opção desejada
  printf(" ------------------------------------\n");
  printf("|          Menu do programa:         |\n");
  printf("| A - Preço da Maçã                  |\n");
  printf("| B - Verificar Vogal                |\n");
  printf(" ------------------------------------\n");
  printf("Informe a opção desejada: ");
  scanf("%c", &opcao);
  //iniciação da função switch
  switch (opcao) {

    case 'A'://método usado para permitir que o usuário use a letra maiúscula e minúscula
      case 'a':
          //pede ao usuário que insira a quantidade de maçãs
          printf("\nInforme quantas maçãs deseja comprar: ");
          scanf("%i", &quantidade);
          //verifica se a quantidade foi menor ou igual a 0
          if (quantidade <= 0) {
            //caso entre nessa condição, exibe mensagem de erro
            printf("\nSinto muito, mas não há como calcular o preço. . .\n\n");
          }else{
          //verifica se a quantidade foi maior ou igual a 50
          if(quantidade >= 50){
            //caso entre nessa condição, o preço das maçãs é calculado para R$0,50 cada
            preco = quantidade * 0.5;
            printf("\nO preço a ser pago das maçãs é: R$%.2f\n\n", preco);
          //verifica se a quantidade foi maior ou igual a 25 e está abaixo de 50
          }else if(quantidade >= 25){
            //caso entre nessa condição, o preço das maçãs é calculado para R$0,60 cada
            preco = quantidade * 0.6;
            printf("\nO preço a ser pago das maçãs é: R$%.2f\n\n", preco);
          //verifica se a quantidade foi maior ou igual a 10 e está abaixo de 25
          }else if(quantidade >= 10){
            //caso entre nessa condição, o preço das maçãs é calculado para R$0,80 cada
            preco = quantidade * 0.8;
            printf("\nO preço a ser pago das maçãs é: R$%.2f\n\n", preco);
          //verifica se a quantidade foi menor que 10
          }else if(quantidade < 10){
            //caso entre nessa condição, o preço das maçãs é igual à quantidade
            preco = quantidade;
            printf("\nO preço a ser pago das maçãs é: R$%.2f\n\n", preco);
          }//else if
          }//else
          break; //encerra o case A/a
      case 'B'://método usado para permitir que o usuário use a letra maiúscula e minúscula
        case 'b':
          //limpa o buffer do teclado, para poder pedir outra inserção
          setbuf(stdin, NULL);
          //pede ao usuário que informe uma letra
          printf("\nInforme um caracter: ");
          scanf("%c", &caracter);
          //verifica se o caracter é igual a alguma variável
          if (caracter == 'a' || caracter == 'A' || caracter == 'e' || caracter == 'E' || caracter == 'i' || caracter == 'I' || caracter == 'o' || caracter == 'O' || caracter == 'u' || caracter == 'U'){
            //se entrar nessa condição, exibe a mensagem de que é uma vogal
            printf("\nVocê digitou uma vogal!!\n\n");
          }else{
            //se entrar no else, exibe a mensagem de que não é uma vogal
            printf("\nO que digitou não é uma vogal\n\n");
          }//else
          break; //encerra o case B/b
      //usado para exibir uma mensagem de erro, caso não tenha sido inserido uma opção válida
      default:
          printf("Opção inválida!!\n\n");
          break; //encerra o default
  }//switch
return 0;
}//main
