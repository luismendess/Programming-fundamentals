//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
  //permite o uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  int l=0, c=0, matriz[3][3], somaprincipal=0, somasecundaria=0;
  //estrutura de repetição aninhada para criação da matriz
	for(l = 0; l < 3; l++){
		for (c=0; c < 3; c++){
      //pede para que o usuário insira todos os valores da matriz
      printf("Insira o valor da %iª linha e %iª coluna: ", l+1, c+1);
      scanf("%i", &matriz[l][c]);
    }//for interno
  }//for externo
  //soma os valores de cada posição específica da diagonal principal
  somaprincipal = matriz[0][0] + matriz[1][1] + matriz[2][2];
  //soma os valores de cada posição específica da diagonal secundária
  somasecundaria = matriz[0][2] + matriz[1][1] + matriz[2][0];
  //exibe a soma dos valores de cada diagonal
  printf("\nA soma da diagonal principal é: %i\n", somaprincipal);
  printf("A soma da diagonal secundária é: %i", somasecundaria);
  printf("\n\n");

return 0;
}//main
