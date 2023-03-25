//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //setlocale para poder inserir acentos e ç durante o código
    setlocale(LC_ALL,"portuguese");
    //declaração de variáveis
    int contador = 1;
    //estrutura while com condição de repetir enquanto menor ou igual a 100
    while(contador <= 100){
      printf("%i\n", contador);
      //adiciona 1 ao valor contador
      contador++;
    }

return 0;
}
