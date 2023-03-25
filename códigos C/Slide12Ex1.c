//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
  //permite o uso de acentos e ç
  setlocale(LC_ALL, "portuguese");
  //declaração de variáveis
  int l, c, matriz[5][5], soma[5];
  //estrutura de repetição aninhada para criação da matriz original
	for(l = 0; l < 5; l++){
		for (c=0; c < 5; c++){
      //estrutura condicional para verificar a diagonal principal e, se for,
      //insere o valor 1, caso não seja, insere o valor 0.
			if(l == c){
				matriz[l][c] = 1;
			} else {
				matriz[l][c] = 0;
			}//else
		}//for interno
	}//for externo
  printf("A matriz identidade é: \n\n");
  //for aninhado para gerar a matriz identidade
	for(l = 0; l < 5; l++){
    //para adicionar uma barra antes de cada linha (estética)
    printf("| ");
		for (c=0; c < 5; c++){
      //insere na matriz soma a soma dos valores da matriz soma e da matriz original
			soma[c] = soma[c]+(matriz[l][c]);
      //exibe a matriz soma, que agora é uma matriz identidade
			printf(" %i  ", matriz[l][c]);
		}//for interno
    //para adicionar uma barra depois de cada linha (estética)
    printf("| ");
		printf("\n\n");
	}//for externo

	return 0;
}//main
