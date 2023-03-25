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
    printf(" Informe a operação com os valores: ");
    //scanf recebendo mais de um valor;
    scanf("%f%c%f", &valor1, &opcao, &valor2);
    //começo da execução do switch
    switch (opcao) {
      case '+':
                //execução do case soma
                resultado = valor1 + valor2;

                printf("O resultado é: %.2f\n\n", resultado);

                break;
      case '-':
                //execução do case subtração
                resultado = valor1 - valor2;

                printf("O resultado é: %.2f\n\n", resultado);
                break;
      case '*':
                //execução do case multiplicação
                resultado = valor1 * valor2;

                printf("O resultado é: %.2f\n\n", resultado);
                break;
      case '/':
                //execução do case divisão
                resultado = valor1 / valor2;

                printf("O resultado é: %.2f\n\n", resultado);
                break;
      default:
                //execução caso o usuário informe valoroes diferentes dos pedidos
                printf("Opção indefinida pelo sistema.\n\n");
                break;
    }//fim do switch

return 0;
}
