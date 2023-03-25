//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int eleva(int x, int y){
  //declaração de variáveis
  int soma = 0;
  if(y==0){
    return 1;
  }//primeiro caso base
  if(y==1){ //segundo caso base
    return x;
  }else{
    return x * eleva(x, y - 1);
  }//else
}//eleva

//função principal do código
int main(){
  //permite o uso de acento e ç
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  int x, y, resultado;

  printf("Insira o valor da base:");
  scanf("%i", &x);
  printf("Insira o valor do expoente:");
  scanf("%i", &y);

  resultado = eleva(x, y);
  printf("\n%i\n\n", resultado);
  return 0;
}
