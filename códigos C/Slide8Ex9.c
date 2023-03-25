//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>


int main(){
    //setlocale para poder inserir acentos e ç durante o código
    setlocale(LC_ALL,"portuguese");
    //declaração de variáveis
    int chute, tentativas = 1, random;
    //função rand para gerar um número aleatório
    srand((unsigned)time(NULL));
    random = rand()%100;

    printf("Adivinha o número\n");
    //estrutura while para repetir enquanto o chute for diferente do número gerado e tiver menos de 6 tentativas
    while(chute != random && tentativas <= 6){
      printf("Informe um valor: ");
      scanf("%i", &chute);
      if(chute > random){
        printf("Muito alto, tente de novo!\n");
      }else if (chute <random){
        printf("Muito baixo, tente de novo!\n");
      }else{}
      //contador de tentativas
      tentativas++;
    }
    //estrutura condicional para determinar o que encerrou o while e exibir a mensagem correspondente
    if(chute == random){
    //remover 1 do contador de tentativas para exibir quantas tentativas foram
    tentativas = tentativas - 1;
      printf("Parabéns, você acertou o número! Com %i tentativas\n\n", tentativas);
    }else{
      printf("Que pena! Tente de novo!\n\n");
    }

return 0;
}
