#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define g 9.8

int main()
{

    //inicializaçao das variaveis de input

    float angdeg, vel0, altteto;

    //Pedir input
    do {
        printf("Escreva o angulo, a velocidade inicial e a altura do teto separado por espaço\n");
        if (scanf("%f %f %f", &angdeg, &vel0, &altteto) == 0){
            printf("Invalid input, please write each value as a number and separated by spaces\n");;
        }
    }
    while (angdeg < 0 || vel0 < 0 || altteto < 0);

    //converter graus em radianos

    double angrad = angdeg * M_PI / 180;

    //calcular distancia e altura da trajetoria

    float d = vel0 * vel0 * sin(2 * angrad) / g;

    float h = vel0 * vel0 * sin(angrad) * sin(angrad) / 2 / g;

    //avisar se bate no teto

    if (h >= altteto) {

        printf("O projectil bate no teto");
        return 0;

    }

    //dizer onde por o cesto

    printf("O cesto devera estar a %f", d);

    return 0;
}
