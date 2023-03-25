//declaração de variáveis
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* Faça um programa que controla o consumo de energia dos
eletrodomésticos de uma casa e:
 Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras),
potência (real, em kW) e tempo ativo por dia (real, em horas).
 Leia um tempo t (em dias), calcule e mostre o consumo total na casa e
o consumo relativo de cada eletrodoméstico (consumo/consumo total)
nesse período de tempo. Apresente este último dado em porcentagem. */

typedef struct{
  char nome[16];
  float potencia;
  float tempoativo;
  int tempomes;
}Eletrodomestico;

int main(){
    //permite uso de acentos e ç
    setlocale(LC_ALL, "portuguese");
    // lendo as variaveis.
    Eletrodomestico eletro[5];
    int i = 0;
    float consumo[5], consumototal = 0, consumorelativo[5];
    for(i = 0; i < 5 ; i++){
      // recebendo um nome de eletrodoméstico
      printf("Digite o nome do %iº eletrodoméstico (máx. 15 caracteres): ", i+1);
      fgets(eletro[i].nome, 16, stdin);
      eletro[i].nome[strcspn(eletro[i].nome, "\n")]='\0';
      fflush(stdin);
      printf("Digite a potência do %iº eletrodoméstico: ", i+1);
      scanf("%f", &eletro[i].potencia);
      fflush(stdin);
      printf("Digite o tempo ativo, em horas, do %iº eletrodoméstico: ", i+1);
      scanf("%f", &eletro[i].tempoativo);
      fflush(stdin);
      printf("Digite quantos dias ele ficou ligado: ");
      scanf("%i", &eletro[i].tempomes);
      fflush(stdin);
      printf("\n");
      consumo[i] = eletro[i].potencia * eletro[i].tempoativo * eletro[i].tempomes;
      consumototal += consumo[i];
    }//for
    printf("\nO consumo total da casa é: %.2fkWh\n\n", consumototal);
    for(i = 0; i < 5; i++){
      consumorelativo[i] = (consumo[i] / consumototal) * 100;
      fflush(stdin);
      printf("O consumo relativo de %s foi de: %.2f%%\n\n", eletro[i].nome, consumorelativo[i]);
    }//for

return 0;
}//main
