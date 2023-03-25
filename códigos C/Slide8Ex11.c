//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
    //setlocale para poder inserir acentos e ç durante o código
    setlocale(LC_ALL,"portuguese");
    //declaração de variáveis
    int contador = 0;
    float valor = 500;
    //estrutura while que faz repetir enquanto o número for no intervalo entre 500 e 1000
    while (valor >= 500 && valor <= 1000) {
      printf("Informe um valor entre 500 e 1000: ");
      scanf("%f", &valor);
      //contador
      contador++;
    }
    printf("Foram exibidos %i valores\n\n", contador);

return 0;
}
