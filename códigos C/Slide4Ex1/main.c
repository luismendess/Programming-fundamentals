#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float vmedia = 80/*km/h*/, tempoMin = 35/*min*/, consumo = 12/*km/L*/;
    float dist, tempoHr, consumidos;

    tempoHr = tempoMin/60;
    dist = vmedia*tempoHr;
    consumidos = dist/consumo;

    printf("O automóvel consumiu %.2fL de combustível durante a viagem.\n\n", consumidos);
    return 0;
}
