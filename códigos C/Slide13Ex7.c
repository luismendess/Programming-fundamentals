//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//função de limpeza de buffer
void limpar_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}//limpar_buffer

//função principal
int main(){
    //permite uso de acentos e ç
    setlocale (LC_ALL, "portuguese");
    //declaração de variáveis
    char sigla[3];
    int l = 0, c = 0;
    //pede inserção de sigla
    printf("------------------------------------------------------\n");
    printf("*Insira a sigla de um Estado da Região Sul ou Sudeste: ");
    fgets(sigla, 3, stdin);
    sigla[strcspn(sigla, "\n")] = '\0';
    limpar_buffer();
    //verifica se o valor inserido é igual a algum desses, independente de maiúsculo ou minúsculo
    if(strcasecmp(sigla, "sp") == 0){
      printf("\nA sigla pertence ao Estado: São Paulo.\n\n");
    }else if(strcasecmp(sigla, "rj") == 0){
      printf("\nA sigla pertence ao Estado: Rio de Janeiro.\n\n");
    }else if(strcasecmp(sigla, "mg") == 0){
      printf("\nA sigla pertence ao Estado: Minas Gerais.\n\n");
    }else if(strcasecmp(sigla, "es") == 0){
      printf("\nA sigla pertence ao Estado: Espírito Santo.\n\n");
    }else if(strcasecmp(sigla, "pr") == 0){
      printf("\nA sigla pertence ao Estado: Paraná.\n\n");
    }else if(strcasecmp(sigla, "sc") == 0){
      printf("\nA sigla pertence ao Estado: Santa Catarina.\n\n");
    }else if(strcasecmp(sigla, "rs") == 0){
      printf("\nA sigla pertence ao Estado: Rio Grande do Sul.\n\n");
    }else{
      printf("\nSigla incorreta\n\n");
      }//else

return 0;
}//main
