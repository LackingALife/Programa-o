#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SieveOfEratosthenes(int *arrayInput[], int limit) {

    int max, i, multiplier = 2;

    max = sqrt(limit);

    for (i = 0; i < limit; i++) {

        (*arrayInput[i]) = i + 2;

    }

    for (i = 0; i < limit && i <= max; i++) {

        if ((*arrayInput[i]) > 0) {

            FlagMultipleNumbers(*arrayInput, max, i);

        }

    }

    return;

}

void FlagMultipleNumbers(int *arrayInput[], int limit, int multiplier) {

    int i;

    for (i = 2 * (*arrayInput[multiplier]) - 2; i < limit; i += (*arrayInput[multiplier])) {

        (*arrayInput[i]) = 0;

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

    int* arrayInt = (int*) malloc((intervalo - 1) * sizeof(int));

    for (i = 0; i < intervalo; i++) {

        arrayInt[i] = 0;

    }

    SieveOfEratosthenes(*arrayInt, intervalo);

    printf("Todos os numeros primos até %i são:\n", intervalo);

    for (i = 0; i < intervalo - 1; i++) {

        if (arrayInt[i] > 0) {

            printf("%i ", arrayInt[i]);

        }
    }

    return 0;
}
