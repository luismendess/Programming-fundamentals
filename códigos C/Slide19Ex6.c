//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  //função principal do código
  int main(){
    //permite o uso de acento e ç
    setlocale(LC_ALL, "portuguese");
    //declaração de Variáveis
    int x, a, *b = &x, **c = &b, ***d = &c;

    printf("Insira um valor: ");
    scanf("%d", &a);
    *b = (a * 2);
    printf("\nO dobro do valor é: %i\n", *b);
    **c = *b + a;
    printf("O triplo do valor é: %i\n", **c);
    ***d = **c + a;
    printf("O quádruplo do valor é: %i\n\n", ***d);

    return 0;
  }//main
