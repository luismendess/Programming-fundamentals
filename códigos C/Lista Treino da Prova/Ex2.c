#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
  int z, z1, z2, z3, cont1 = 0, cont2 = 0;
  float media, somador = 0;
//Recebe valores para z
  printf("Digite um numero para z: ");
  scanf("%i", &z);

  z1 = z;
  z2 = z;
  z3 = z;
  
//Cria um laço de repetição que decrementa z
  do{
    printf("%i\n", z);
    z--;
  }while(z > 0);

  printf("\n\n");
// Cria um laço de repetição que calcula o valores de z multiplos de 4
  for(z1; z1 > 0; z1--){
    if(z1 % 4 == 0){
      printf("%i\n", z1);
    }//if
  }//for

  printf("\n\n");

  for(z2; z2 > 0; z2--){
    if(z2 % 3 == 0){
      cont1 ++;
    }//if
  }//for
  printf("Existem %i multiplos de 3\n", cont1);
  printf("\n\n");

  for(z3; z3 > 0; z3--){
    if(z3 % 5 == 0){
      somador += z3;
      cont2++;
    }//if
  }//for
  media = somador/cont2;
  printf("%.2f\n\n", media);

return 0;
}//main