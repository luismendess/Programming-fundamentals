#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
    setlocale(LC_ALL, "portuguese");//adiciona acentos e ç na exibição

    //varíaveis
    float x1, x2, y1, y2, distancia;

    //inserção de valores para as coordenadas
    printf("Por favor, insira o primeiro valor de x: ");
    scanf("%f", &x1);
    printf("Por favor, insira o primeiro valor de y: ");
    scanf("%f", &y1);
    printf("Por favor, insira o segundo valor de x: ");
    scanf("%f", &x2);
    printf("Por favor, insira o segundo valor de y: ");
    scanf("%f", &y2);

    //exibição das coordenadas
    printf("A primeira coordenada é: (%.1f\;%.1f)\n", x1, y1);
    printf("A segunda coordenada é: (%.1f\;%.1f)\n\n", x2, y2);

    //cálculo da distância entre os pontos
    distancia = sqrt((pow(x2 - x1, 2)) + (pow(y2-y1, 2)));

    //exibição final da distância entre os pontos
    printf ("A distância entre os pontos é: %.2f\n\n", distancia);

    return 0;
}
