//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*11) Desenvolva um algoritmo que receba vários números no intervalo fechado de 1 a 1000.
Ao receber um valor fora da faixa, o programa deverá exibir a soma dos números pares e o produto dos números ímpares e finalizar.
Obs: O valor fora da faixa utilizado para sair não deverá entrar na conta da soma nem do produto.*/


int main (){
  //setlocale que permite o uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  int valor = 1, soma = 0, produto = 1;
  //estrutura while que repete enquanto o valor estiver dentro do intervalo de 1 a 1000
  while (valor >= 1 && valor <= 1000) {
    printf("Insira um valor: ");
    scanf("%i", &valor);
    //estrutura condicional que verifica se é par ou ímpar
    if(valor % 2 == 0){
    //soma dos valores pares informados pelo usuário
    soma = (soma + valor);
    }else{
      //produto dos valores ímpares informados pelo usuário
      produto = produto * valor;
    }//else
  }//while
        //exibe o resultado da soma dos pares menos o valor final informado pelo usuário, que encerra o programa
        printf("A soma dos pares é: %i\n", soma-valor);
        //exibe o resultado do produto dos pares
        printf("O produto dos ímpares é: %i\n", produto);


return 0;
}//main
