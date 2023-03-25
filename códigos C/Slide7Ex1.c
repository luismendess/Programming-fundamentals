//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    //setlocale para poder inserir acentos e ç durante o código
    setlocale(LC_ALL,"portuguese");
    //declaração de variáveis
    int opcao, valor, idade;
    //menu para pedir o valor referente ao case que será usado
    printf("    Menu do programa: \n");
    printf(" 1 - Verificar Par/Ímpar\n");
    printf(" 2 - Verificar maior/menor de idade\n");
    printf("Informe um valor: ");
    scanf("%i", &opcao);
    //começo da execução do switch
    switch (opcao) {
      case 1:
                //execução do case 1
                printf("\nInforme um valor para verificar se é par/ímpar: ");
                scanf("%i", &valor);
                if(valor%2 == 0){
                  printf("O valor é par\n\n");
                }else{
                  printf("O valor é ímpar\n\n");
                }
                break;
      case 2:
                //execução do case 2
                printf("\nInforme sua idade: ");
                scanf("%i", &idade);
                if(idade >= 18){
                  printf("Você é maior de idade\n\n");
                }else{
                  printf("Você é menor de idade\n\n");
                }
                break;
      default:
                //execução caso o usuário informe um valor diferente de 1 ou 2
                printf("O valor informado não tem uma opção.\n\n");
                break;
    }//fim do switch

return 0;
}
