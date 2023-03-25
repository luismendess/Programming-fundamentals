/*Faça um programa que armazene o nome e salário de 5
empregados. Em seguida calcule um aumento de 8% nos
salários e exiba a nova folha de pagamentos.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void limpar_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}//limpar_buffer

int main(){
  float salario[5], aumento[5];
  char nomes[5][11];

  for(int i = 0; i < 5; i++){
    printf("Digite seu nome: ");
    fgets(nomes[i], 5, stdin);
    nomes[i][strcspn(nomes[i], "\n")] = '\0';
    limpar_buffer();
    printf("Digite seu salario: ");
    scanf("%f", &salario[i]);
    limpar_buffer();
    aumento[i] = salario[i] * 1.08;
  }//for
    for (int i = 0; i < 5; i++) {
      printf("%s agora recebe: R$%.2f\n", nomes[i], aumento[i]);
    }//for
    printf("\n");
  return 0;
}//main
