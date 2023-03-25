//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibonacci(int n){
  //caso base
   if(n == 1 || n == 2){
       return 1;
     }else{
       return fibonacci(n - 1) + fibonacci(n - 2);
     }//else
}//fibonacci

int main(){
   int n, i;
   printf("Digite a quantidade de termos da sequência de Fibonacci: ");
   scanf("%d", &n);
   printf("\nA sequência de Fibonacci é: \n");
   for(i = 0; i < n; i++){
   printf("%d\n", fibonacci(i + 1));
   }//for
   return 0;
}//main
