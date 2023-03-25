//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //setlocale usado para poder
    setlocale(LC_ALL, "portuguese");
    //declaração de variáveis
    int valor, linha, coluna;

    printf("Informe o tamanho do quadrado de #: ");
    scanf("%i", &valor);

    for(linha = 1 ; linha <= valor; linha++){
            printf("\n");
      for(coluna = 1; coluna <= valor; coluna++){
            printf(" #");
      }
    }
    printf("\n\n");


return 0;
}
