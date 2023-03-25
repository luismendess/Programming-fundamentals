//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    //setlocale para poder inserir acentos e ç durante o código
    setlocale(LC_ALL,"portuguese");
    //declaração de variáveis
    int alunos = 1;
    float nota1, nota2, media;
    //estrutura do, que garante que o código funcione pelo menos 1 vez
    do{
        printf("Insira a primeira nota do %iº aluno: ", alunos);
        scanf("%f", &nota1);
        printf("Insira a segunda nota do %iº aluno: ", alunos);
        scanf("%f", &nota2);
        //condicional para exibir uma mensagem de erro quando a nota for fora do intervalo de 0 a 10
        if (nota1 > 10 || nota1 < 0 || nota2 > 10 || nota2 < 0){
          //Exibe a mensagem de erro
          printf("\nErro! Faça uma nova digitação...\n");
        }else{
          media = (nota1 + nota2)/2;
          printf("\nA média do aluno %iº é %.2f\n\n",alunos, media);
          //Incrementa o valor da variável
          alunos++;
        }
    }while (alunos <=5);//condicional de repetição da estrutura do
return 0;
}
