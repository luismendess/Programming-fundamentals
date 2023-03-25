//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  //fun��o principal do c�digo
  int main(){
    //permite o uso de acento e �
    setlocale(LC_ALL, "portuguese");
    //declara��o de vari�veis
    int variavel1, variavel2;
    int *ponteiro1, *ponteiro2;
    //recebe valores
    printf("insira o valor da primeira variavel: ");
    scanf("%d", &variavel1);
    printf("insira o valor da segunda variavel: ");
    scanf("%d", &variavel2);
    //insere o valor recebido no endere�o ponteiro1 e ponteiro2
    ponteiro1 = &variavel1;
    ponteiro2 = &variavel2;
    //verifica qual endere�o � o maior e exibe
    if(ponteiro1 > ponteiro2){
      printf("O valor neste endere�o �: %d\n", variavel1);
      printf("este endereço é: %p\n\n", &variavel1);
    }else{
      printf("O valor neste endere�o �: %d\n", variavel2);
      printf("este endere�o �: %p\n\n", &variavel2);
    }//else

    return 0;
}//main
