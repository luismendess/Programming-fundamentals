//Declaração de Variáveis
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void ComparaString(char* ponteiro1, char* ponteiro2) {

  char *comparacao = strstr(ponteiro1, ponteiro2);

  if (comparacao){
    printf("A primeira string contém a segunda\n\n");
  }else{
    printf("A primeira string não contém a segunda\n\n");
  }//else
  return;
}//ComparaString

//Função Principal
int main (){
  //permite o uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  //Declaração de variáveis
  char string1[100], string2[100];

  printf("Digite um uma frase: ");
  fgets(string1, 100, stdin);
  string1[strcspn(string1,"\n")] = '\0';
  fflush(stdin);

  printf("Digite algo da primeira frase: ");
  fgets(string2, 100, stdin);
  string2[strcspn(string2,"\n")] = '\0';
  fflush(stdin);
  //Declara dois ponteiros que recebem o endereço de memória das duas strings
  char *ponteiro1 = string1;
  char *ponteiro2 = string2;
  printf("\n");
  //Chama a função ComparaString
  ComparaString(ponteiro1, ponteiro2);

  return 0;
}//main
