#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  float preco[3][3];
  int l=0, c=1,contador;

      for (l = 0; l < 3; l++) {
      for (c = 0; c < 1; c++) {
        printf("Insira o preço do  %iº produto: ",contador+1);
        scanf("%f", &preco[l][c]);
        contador++;
      }//for interno
    }//for externo

 printf("\n");
  for (l = 0; l < 3; l++) {
    for (c = 0; c < 3; c++) {

      preco[0][1] = preco[0][0] * 1.1;
      preco[1][1] = preco[1][0] * 1.1;
      preco[2][1] = preco[2][0] * 1.1;
    }//for interno
  }//for externo
printf("\n   ------------------------------\n");
   for (l = 0; l < 3; l++) {
     for (c = 0; c < 3; c++) {
       preco[0][2] = preco[0][0] * 1.2;
       preco[1][2] = preco[1][0] * 1.2;
       preco[2][2] = preco[2][0] * 1.2;
       printf("   | %.2f |", preco[l][c]);
     }//for interno
     printf("\n");
   }//for externo
   printf("   ------------------------------\n\n");
  return 0;
}//main
