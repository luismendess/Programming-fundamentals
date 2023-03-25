//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//cria uma lista enumerada de meses, vai de 0 a 11
enum Mes {JANEIRO=1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO};
//função principal
int main(){
    //permite o uso de acentos e ç
    setlocale(LC_ALL, "portuguese");
    //declaração de variável
    int mes;
    //pede para inserir o mês
    printf("Digite um número para exibir um mês: ");
    scanf("%i", &mes);
    /*compara o valor rearranjado com a posição do mês que o usuário quer
    exibindo qual foi o mês e quantos dias ele tem*/
    if(mes == JANEIRO){
      printf("\nO mês é Janeiro e tem 31 dias\n\n");
    }else if(mes == FEVEREIRO){
      printf("\nO mês é Fevereiro e tem 28 dias\n\n");
    }else if(mes == MARCO){
      printf("\nO mês é Março e tem 31 dias\n\n");
    }else if(mes == ABRIL){
      printf("\nO mês é Abril e tem 30 dias\n\n");
    }else if(mes == MAIO){
      printf("\nO mês é Maio e tem 31 dias\n\n");
    }else if(mes == JUNHO){
      printf("\nO mês é Junho e tem 30 dias\n\n");
    }else if(mes == JULHO){
      printf("\nO mês é Julho e tem 31 dias\n\n");
    }else if(mes == AGOSTO){
      printf("\nO mês é Agosto e tem 31 dias\n\n");
    }else if(mes == SETEMBRO){
      printf("\nO mês é Setembro e tem 30 dias\n\n");
    }else if(mes == OUTUBRO){
      printf("\nO mês é Outubro e tem 31 dias\n\n");
    }else if(mes == NOVEMBRO){
      printf("\nO mês é Novembro e tem 30 dias\n\n");
    }else if(mes == DEZEMBRO){
      printf("\nO mês é Dezembro e tem 31 dias\n\n");
    }else{
      printf("\nMês inexistente!!\n\n");
    }//else

return 0;
}//
