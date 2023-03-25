//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    //setlocale para poder inserir acentos e ç durante o código
    setlocale(LC_ALL,"portuguese");
    //declaração de variáveis
    char opcao;
    float resultado, valor1, valor2;
    //menu para pedir o valor referente ao case que será usado
    printf(" Menu do programa: \n");
    printf(" + - Soma\n");
    printf(" - - Subtração\n");
    printf(" * - Multiplicação\n");
    printf(" / - divisão\n");
    printf(" Informe a operação: ");
    scanf("%c", &opcao);
    //começo da execução do switch
    switch (opcao) {
      case '+':
                //execução do case soma
                printf("\nInforme um valor para somar: ");
                scanf("%f", &valor1);
                printf("\nInforme outro valor para somar: ");
                scanf("%f", &valor2);

                resultado = valor1 + valor2;

                printf("O resultado é: %.2f\n\n", resultado);

                break;
      case '-':
                //execução do case subtração
                printf("\nInforme um valor para subtrair: ");
                scanf("%f", &valor1);
                printf("\nInforme outro valor para subtrair: ");
                scanf("%f", &valor2);

                resultado = valor1 - valor2;

                printf("O resultado é: %.2f\n\n", resultado);
                break;
      case '*':
                //execução do case multiplicação
                printf("\nInforme um valor para multiplicar: ");
                scanf("%f", &valor1);
                printf("\nInforme outro valor para multiplicar: ");
                scanf("%f", &valor2);

                resultado = valor1 * valor2;

                printf("O resultado é: %.2f\n\n", resultado);
                break;
      case '/':
                //execução do case divisão
                printf("\nInforme um valor para dividir: ");
                scanf("%f", &valor1);
                printf("\nInforme outro valor para dividir: ");
                scanf("%f", &valor2);

                resultado = valor1 / valor2;

                printf("O resultado é: %.2f\n\n", resultado);
                break;
      default:
                //execução caso o usuário informe um valor diferente dos pedidos
                printf("Opção indefinida pelo sistema.\n\n");
                break;
    }//fim do switch

return 0;
}
