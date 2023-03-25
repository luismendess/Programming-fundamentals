//declaração de variáveis
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
  float media;
  float nota1;
  float nota2;
  float nota3;
  float nota4;
  char nome[50];
  char curso[50];
  char situacao[10];
}Aluno;

int main(){
    //permite uso de acentos e ç
    setlocale(LC_ALL, "");
    Aluno aluno;
    // recebendo nome
    printf("Digite seu nome: ");
    fgets(aluno.nome, 50, stdin);
    aluno.nome[strcspn(aluno.nome,"\n")]='\0';
    setbuf(stdin,NULL);
    // recebendo o nome do curso
    printf("Digite seu curso: ");
    fgets(aluno.curso, 50, stdin);
    aluno.curso[strcspn(aluno.curso,"\n")]='\0';
    setbuf(stdin,NULL);
    // recebendo os valores
    printf("\nInsira a 1ª nota: ");
    scanf("%f", &aluno.nota1);
    printf("\nInsira a 2ª nota: ");
    scanf("%f", &aluno.nota2);
    printf("\nInsira a 3ª nota: ");
    scanf("%f", &aluno.nota3);
    printf("\nInsira a 4ª nota: ");
    scanf("%f", &aluno.nota4);
    // calculando a média =)
    aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3 + aluno.nota4) / 4;
    if (aluno.media >= 7) {
      strcpy(aluno.situacao, "Aprovado");
      printf("\n%s\n\n", aluno.situacao);
    }else if (aluno.media >= 3){
      strcpy(aluno.situacao, "Exame");
      printf("\n%s\n\n", aluno.situacao);
    }else if(aluno.media < 3){
      strcpy(aluno.situacao, "Reprovado");
      printf("\n%s\n\n", aluno.situacao);
    }//else

return 0;
}//main
