//inserção das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float notas[10], mediageral=0, aprovados=0, soma=0, maior, menor=10;
    int alunos, reprovou=0, aprovou=0;

    for(alunos = 0; alunos < 10; alunos++){
      printf("Insira a nota do %iº aluno: ", alunos+1);
      scanf("%f", &notas[alunos]);
      while(notas[alunos] < 0 || notas[alunos] > 10){
      printf("\nNota inválida! Digite novamente.\n");
      printf("Insira a nota do %iº aluno: ", alunos+1);
      scanf("%f", &notas[alunos]);
    }//while
      if(notas[alunos] > maior){
        maior = notas[alunos];
      }//if
      if(notas[alunos] < menor){
        menor = notas[alunos];
      }//if
    if(notas[alunos] < 6){
        reprovou++;
      }//if
    soma += notas[alunos];
  }//for
    printf("\n%i alunos foram reprovados\n\n", reprovou);
    mediageral = soma / 10;

    for(alunos = 0; alunos < 10; alunos++){
      if(notas[alunos] >= 6){
        printf("O aluno %i foi aprovado com a nota: %.2f\n",alunos+1, notas[alunos]);
        aprovou++;
      }//if
    }//for
    printf("\nA média geral é: %.2f\n", mediageral);
    aprovados = aprovou * 10;
    printf("\nA porcentagem dos aprovados é: %.2f%%\n", aprovados);
    printf("\nA maior nota é: %.2f\n", maior);
    printf("\nA menor nota é: %.2f\n\n", menor);

return 0;
}
