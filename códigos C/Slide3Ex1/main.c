#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

int main() {

    setlocale(LC_ALL, "portuguese");
    char letra;

  printf("Olá, informarei seu nome e e-mail!!\n\n");
  sleep(1);
  printf("-Seu nome é: Luis Henrique Mendes\n");
  sleep(1);
  printf("-Seu e-mail é: luismendes@hotmail.com\n\n");
  sleep(1);
  printf("Por favor, pressione qualquer tecla e confirme!\n");
  sleep(1);
  letra=getch();
  printf("\nObrigado! agora exibirei o nome e e-mail de seu amigo.\n");
  sleep(1);
  printf("\n-O nome dele é: Carlos Eduardo\n");
  sleep(1);
  printf("-E o e-mail é: carlos123@gmail.com\n\n");
}
