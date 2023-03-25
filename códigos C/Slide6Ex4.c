//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    //setlocale para poder inserir acentos e ç durante o código
        setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
        float imposto, salario, aliquota, parceladeducao;
    //inserção de valor para executar o comando
        printf("Por favor, insira o salário do empregado: ");
        scanf("%f", &salario);

        //condicional para verificar se o salário é maior que 4664.68
        if(salario >= 4664.68){
          //se o código entrar nesse if, esses serão os valores da alíquota e da parcela de dedução
          aliquota = 27.5/100;
          parceladeducao = 869.36;
          //cálculo do imposto referente ao salário do empregado
          imposto =  salario * aliquota - parceladeducao;

          printf("O imposto referente a esse salário é: %.2f\n", imposto);
        }else if(salario >= 3751.06){ //condicional para verificar se o salário é maior que 3751.06
          //se o código entrar nesse if, esses serão os valores da alíquota e da parcela de dedução
          aliquota = 22.5/100;
          parceladeducao = 636.13;
          //cálculo do imposto referente ao salário do empregado
          imposto =  salario * aliquota - parceladeducao;

          printf("O imposto referente a esse salário é: %.2f\n", imposto);
        }else if(salario >= 2826.66){ //condicional para verificar se o salário é maior que 2826.66
          //se o código entrar nesse if, esses serão os valores da alíquota e da parcela de dedução
          aliquota = 15/100;
          parceladeducao = 354.80;
          //cálculo do imposto referente ao salário do empregado
          imposto =  salario * aliquota - parceladeducao;

          printf("O imposto referente a esse salário é: %.2f\n", imposto);
        }else if(salario >= 1903.99){ //condicional para verificar se o salário é maior que 1903.99
          //se o código entrar nesse if, esses serão os valores da alíquota e da parcela de dedução
          aliquota = 7.5/100;
          parceladeducao = 142.80;
          //cálculo do imposto referente ao salário do empregado
          imposto =  salario * aliquota - parceladeducao;

          printf("O imposto referente a esse salário é: %.2f\n", imposto);
        }else{
          printf("\nO empregado este isento de imposto.\n\n");
        }

return 0;
}
