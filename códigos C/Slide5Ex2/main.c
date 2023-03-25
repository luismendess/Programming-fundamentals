#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "portuguese");

    int anonasc, anoatual, idade;

    printf("Por favor, insira o ano atual: ");
    scanf("%i", &anoatual);
    printf("\nAgora Insira o ano em que nasceu: ");
    scanf("%i", &anonasc);

    idade = anoatual - anonasc;

   printf("\nVocê tem %i anos!\n\n", idade);
    return 0;
}
