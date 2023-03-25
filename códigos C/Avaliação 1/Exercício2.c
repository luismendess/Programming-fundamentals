//implementação de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//iniciação da função main
int main (){
  //setlocale, que permite a utilização de acentos e ç no código
  setlocale (LC_ALL, "portuguese");
  //declaração de variáveis
  long int individuos;//para aceitar grandes quantidades de indivíduos
  int horas = 0, minutos = 0, segundos = 0, estalos = 0, resto;
  //pede ao indivíduo poderoso que informe quantos seres ele quer
  printf("Senhor Supremo, diga-me quantos indivíduos existem no universo: ");
  scanf("%i", &individuos);
  /*estrutura do/while para que repita a divisão dos seres do univeros e conte quantas estaladas
  foram dadas*/
  do{
    individuos = (individuos/2);
    estalos++;
  }while (individuos > 500);//condição que faz encerrar quando for menor que 500
  //calcula que a cada estalada é necessário 5 segundos de descanso
  segundos = estalos*5;
  //calcula que 1 hora tem 3600 segundos
  horas = segundos / 3600;
  //calcula com % para poder inserir o resto das horas em minutos e segundos
  resto = segundos % 3600;
  /*calcula que 1 minuto tem 60 segundos usando o "resto",
  para exibir os minutos que sobraram de horas*/
  minutos = resto / 60;
  /*calcula usando resto como variável e % para exibir os segundos,
  independente se tem ou não minutos ou horas*/
  segundos = resto % 60;
  //exibe quanto tempo o indivíduo poderoso levou para chegar em sua estimada ambição
  printf("\nSenhor Supremo, o senhor levou %ih:%im:%is\n\n", horas, minutos, segundos);
return 0;
}//main
