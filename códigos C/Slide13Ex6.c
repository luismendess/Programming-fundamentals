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
    char nome[10][10], sobrenome[10][10];
    int l = 0;
    //pede a inserção de nome e sobrenome
    printf("Insira um nome: ");
    fgets(nome[l], 20, stdin);
    nome[l][strcspn(nome[l], "\n")] = '\0';
    printf("Insira um sobrenome: ");
    fgets(sobrenome[l], 20, stdin);
    sobrenome[l][strcspn(sobrenome[l], "\n")] = '\0';
    //adiciona numa string o sobrenome e a vírgula
    strcat (sobrenome[l], ", ");
    //adiciona numa string o sobrenome com a vírgula e o nome
    strcat (sobrenome[l], nome[l]);
    printf("Nome em formato americano: %s\n\n", sobrenome[l]);

return 0;
}//main
