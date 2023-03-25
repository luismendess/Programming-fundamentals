//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    //setlocale para poder inserir acentos e ç durante o código
    setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
    float nota;
    //inserção de valor para executar o comando
    printf("Por favor, informe a nota do aluno: ");
    scanf("%f", &nota);
    //condicional para verificar se é uma nota válida
    if (nota>10 || nota<0){
        printf("Essa nota não existe...\n\n");
    }else{
        //condicional para verificar se a nota é maior ou igual a 6
        if(nota >= 6){
        printf("O aluno foi aprovado!! \n:)\n\n");
    }else {
        printf("O aluno foi reprovado! \n:c\n\n");
    }
    }
    return 0;
}
