//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    //setlocale para poder inserir acentos e ç durante o código
        setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
        int numero;
    //inserção de valor para executar o comando
        printf("Por favor, insira um valor para avaliar se é par ou ímpar: ");
        scanf("%i", &numero);
    //condicional com o % para calcular o resto da divisão
        if(numero%2 == 0){
          printf("\nO número é par\n\n");
        }else{
          printf("\nO número é ímpar\n\n");
        }

return 0;
}
