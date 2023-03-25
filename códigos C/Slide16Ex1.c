//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//função para receber os valores e comparar qual é maior
int numeros(int valor1, int valor2, int valor3, int maior){
  //insere 0 no valor de maior, inicialmente
  maior = 0;

  printf("Insira o primeiro valor: ");
  scanf("%i", &valor1);
  printf("Insira o segundo valor: ");
  scanf("%i", &valor2);
  printf("Insira o terceiro valor: ");
  scanf("%i", &valor3);
  //verificação de qual é o maior valor
  if(valor1 > 0){
    //insere o valor em maior caso seja maior que 0
    maior = valor1;
  }//if
  if(valor2 > maior){
    //insere o valor em maior caso seja maior que o valor 1
    maior = valor2;
  }//if
  if(valor3 > maior){
    //insere o valor em maior caso seja maior que o valor 2
    maior = valor3;
  }//if
  //verifica se algum dos valores informados é negativo
  if(valor1 < 0 || valor2 < 0 || valor3 < 0){
    //caso seja, o valor final será -1
    maior = -1;
}
//retorna a variável maior
  return maior;
}//numeros
//função principal do código
int main() {
  //permite o uso de acentos e ç
  setlocale (LC_ALL, "portuguese");
  //declaração de variáveis
  int maior, valor1, valor2, valor3;
  //determina qual o maior valor a partir dos valores da outra função
  maior = numeros(valor1, valor2, valor3, maior);
  //exibe o maior valor
  printf("\nO maior valor é: %i\n\n", maior);

  return 0;
}//main
