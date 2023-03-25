#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "portuguese");

    float totalvendido, comissao, salariobruto, salariobase = 1200;

    printf("Por favor, informe o total vendido pelo funcionário em reais: ");
    scanf("%f",&totalvendido);

    comissao = totalvendido * 0.1;

    printf("\nO funcionário recebeu R$%.2f de comissão.\n", comissao);

    salariobruto = comissao + salariobase;

    printf("\nO salário bruto do funcionário foi de R$%.2f.\n\n", salariobruto);
    return 0;
}
