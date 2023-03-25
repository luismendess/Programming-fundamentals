//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //setlocale para poder inserir acentos e ç durante o código
    setlocale(LC_ALL,"portuguese");
    //declaração de variáveis
    int valor = 3;
    //estrutura while com condição de repetir enquanto menor ou igual a 322
    while(valor <= 322){
      //condicional para verificar se os valores contados são multiplos de 3
      if(valor%3 == 0){
      printf("%i\n", valor);
      }
      //adiciona 1 ao valor contador
      valor++;
    }

return 0;
}
