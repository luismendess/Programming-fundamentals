//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //setlocale para poder inserir acentos e ç durante o código
    setlocale(LC_ALL,"portuguese");
    //declaração de variáveis
    int contador = 100;
    //estrutura while com condição de repetir enquanto maior ou igual a 1
    while(contador >= 1){
      printf("%i\n", contador);
      //subtrai 1 ao valor contador
      contador--;
    }

return 0;
}
