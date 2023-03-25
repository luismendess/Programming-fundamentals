#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");
    int A = 10, B = 5, sup;

    printf("Os valores de A e B são, respectivamente: %i e %i\n\n", A, B);
    sup=A;
    A=B;
    B=sup;
    printf("Agora os valores de A e B são, respectivamente: %i e %i\n\n", A, B);
    return 0;
}
