//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//estrutura de horário com segundos, minutos e hora
typedef struct{
  int horas;
  int minutos;
  int segundos;
}Horario;
//função para converter o horário
void converteHorario(int total_segundos, Horario* hor){

  printf("Digite quantos segundos: ");
  scanf("%i", &total_segundos);
  //variável hor recebe horas como os segundos totais dividido por 3600
  hor -> horas = total_segundos / 3600;
  //variável hor recebe minutos como os segundos totais dividido por 3600 e o resto dividido por 60
  hor -> minutos = (total_segundos % 3600) / 60;
  //variável hor recebe segundos como os resto de segundos totais dividido por 3600 e o resto dividido por 60
  hor -> segundos = (total_segundos % 3600) % 60;
  //retorna o valor da função toda
  return;
}//função converteHorario
//função principal do código
int main(){
  //declaração de variáveis
  Horario hor;
  int total_segundos;
  //chama a função converteHorario para a função principal
  converteHorario(total_segundos, &hor);
  printf("%d:%d:%d\n\n", hor.horas, hor.minutos, hor.segundos);
  
  return 0;
}//main
