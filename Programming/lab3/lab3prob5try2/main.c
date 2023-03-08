#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void FlagMultipleNumbers(int *arrayInput, int max, int multiplier) {

    int p;

    for (p = multiplier * 2; p < max + 1; p += multiplier) {

        if (arrayInput[p] == 1) {

            arrayInput[p] = 0;

        }

    }

    return;

}

void SieveOfEratosthenes(int *arrayInput, int max) {

    int i;

    arrayInput[0] = 0;
    arrayInput[1] = 0;

    for (i = 2; i < max + 1; i++) {

        arrayInput[i] = 1;

    }

    for (i = 2; i < sqrt(max); i++) {

        if (arrayInput[i] > 0) {

            FlagMultipleNumbers(arrayInput, max, i);

        }

    }

    return;

}

int main()
{
    int intervalo, i;

    do {

        printf("Ver todos os numeros primos entre até?\n");
        if (scanf("%i", &intervalo) < 1) {

            printf("Não consegui ler :(, fechando programa.\n");
            return -1;

        }

    } while (intervalo < 1 || intervalo > 1000);

    int arrayPrimos[intervalo + 1];

    SieveOfEratosthenes(&arrayPrimos, intervalo);

    for (i = 0; i < intervalo; i++) {

        if (arrayPrimos[i] == 1) {

            printf("%i ", i);

        }
    }

    return 0;
}
