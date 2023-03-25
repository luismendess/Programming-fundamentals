#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float v1, v2, v3, v4, media;

    printf("Por favor, informe o primeiro valor para realizar a média: ");
    scanf("%f", &v1);
    printf("\nAgora o segundo valor: ");
    scanf("%f", &v2);
    printf("\nO terceiro valor: ");
    scanf("%f", &v3);
    printf("\nE, por fim, o quarto valor: ");
    scanf("%f", &v4);

    media = (v1 + v2 + v3 + v4) / 4;

    printf("\nA média aritmética desses quatro valores é: %.2f.\n\n", media);
    return 0;
}
