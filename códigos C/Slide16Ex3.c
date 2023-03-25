//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//função para receber os valores, verificar a opção desejada e calcular o que se pede
float notas(float nota1, float nota2, float nota3, float media, char tipocalculado){

  printf("Insira a primeira nota: ");
  scanf("%f", &nota1);
  printf("Insira a segunda nota: ");
  scanf("%f", &nota2);
  printf("Insira a terceira nota: ");
  scanf("%f", &nota3);
  printf("\n");
  printf("---------------Cálculo de notas--------------\n");
  printf("|       *Indique a forma a calcular*        |\n");
  printf("|              A - Aritmética               |\n");
  printf("|              P - Ponderada                |\n");
  printf("|              S - Soma                     |\n");
  printf("---------------------------------------------\n");
  //indica onde inserir o valor
  printf("Insira aqui: ");
  scanf("%s", &tipocalculado);
  //estrutura de seleção para A, P, S
  switch (tipocalculado) {
    case 'A':
    case 'a':
        printf("A forma escolhida foi Média Aritmética!\n");
        //calcula a media aritmetica
        media = (nota1 + nota2 + nota3) / 3;
        //encerra o bloco a/A
        break;
    case 'P':
    case 'p':
        printf("A forma escolhida foi Média Ponderada!\n");
        //calcula a média ponderada
        media = (5 * nota1 + 3 * nota2 + 2 * nota3) / 10;
        //encerra o bloco p/P
        break;
    case 'S':
    case 's':
        printf("A forma escolhida foi Soma das Notas!\n");
        //soma as notas
        media = nota1 + nota2 + nota3;
        //encerra o bloco s/S
        break;
    default:
        printf("Opção inválida!!\n\n");
        break;
  }//switch
  //retorna a média
  return media;
}//notas
//função principal do código
int main(){
  //permite o uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  char tipocalculado;
  float nota1, nota2, nota3, media;
  //insere os valores da função notas em media
  media = notas(nota1, nota2, nota3, media, tipocalculado);
  printf("\nO valor calculado é: %.2f\n", media);

  return 0;
}//main
