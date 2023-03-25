//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    //setlocale para poder inserir acentos e ç durante o código
    setlocale(LC_ALL,"portuguese");
    //declaração de variáveis
    int contador = 1, valor, resultado;
    //estrutura while com condição de repetir 10 vezes
    while(contador >= 1 && contador <= 10){
      printf("Informe o valor a ser calculado: ");
      scanf("%i", &valor);
      //função pow não da certo no 10 e 11 ao quadrado
      resultado = valor * valor;
      printf("O valor ao quadrado é: %i\n\n", resultado);
      contador++;
    }


return 0;
}
