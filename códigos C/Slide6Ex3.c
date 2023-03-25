//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
    //setlocale para poder inserir acentos e ç durante o código
        setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
        float a, b, c, delta, x1, x2;
    //inserção dos valores para executar o comando
        printf("Por favor, insira um valor para A: ");
        scanf("%f", &a);
        printf("Por favor, insira um valor para B: ");
        scanf("%f", &b);
        printf("Por favor, insira um valor para C: ");
        scanf("%f", &c);
    //cálculo para determinar o delta e depois achar as raízes
        delta = pow(b, 2) - 4 * a * c;
    // condicional para verificar se delta não é negativo e a é diferente de 0, para fazer o código ser finalizado
        if(delta >= 0 && a != 0){
          x1 = (-b+(sqrt(delta))) / (2 * a);
          x2 = (-b-(sqrt(delta))) / (2 * a);
          printf("\nO valor das duas raízes são: %.2f e %.2f\n\n", x1, x2);
        }else{
          printf("\nÉ impossível realizar esse cálculo!\n\n");
        }

return 0;
}
