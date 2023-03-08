#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double maxVect(double arrayVect[], int numValores) {

    double maxVect = arrayVect[0];
    int i;

    for (i = 1; i < numValores; i++) {

        if (arrayVect[i] > maxVect) {

            maxVect = arrayVect[i];

        }

    }

    return maxVect;

}

double minVect(double arrayVect[], int numValores) {

    double minVect = arrayVect[0];
    int i;

    for (i = 1; i < numValores; i++) {

        if (arrayVect[i] < minVect) {

            minVect = arrayVect[i];

        }

    }

    return minVect;

}

int* calculoHistograma(double arrayVect[], int numValores, int numIntervalos, double largura, int minValor) {

    int* arrayHisto = (int*) malloc((numValores + 1) * sizeof(int));

    int i, j;

    for (i = 0; i < numValores; i++) {

        j = (arrayVect[i] - minValor) / largura;
        //printf("j = %i\n", j);
        arrayHisto[j]++;

    }

    return arrayHisto;

}

/** \brief
 *
 * \param arrayHisto[] int
 * \param numIntervalos int
 * \param largura double
 * \param minVect double
 * \return void
 *
 */
void imprimirHistograma(int arrayHisto[], int numIntervalos, double largura, double minVect) {

    int i, j, maxHisto, step;

    maxHisto = arrayHisto[0];

    for (i = 1; i < numIntervalos; i++) {

        if (arrayHisto[i] > maxHisto) {

            maxHisto = arrayHisto[i];

        }

    }

    printf("Numero de ocorrencias\n");

    step = maxHisto / 10;

    if (step < 1) step = 1;

    //printf("maxHisto = %i\n", maxHisto);

    for (i = maxHisto; i > 0; i -= step) {

        printf("%10i-", i);

        for (j = 0; j < numIntervalos; j++) {

            if (arrayHisto[j] >= i) {

                printf("   ***   ");

            } else {

                printf("         ");

            }

        }

        printf("\n");

    }

    printf("intervalo--");

    for (i = 0; i < numIntervalos; i++) {

        printf("    %i    ", i + 1);

    }

    return;

}

int main()
{
    int numIntervalos, numValores, i, *arrayHisto;
    double largura, maxValor, minValor;

    do {

        printf("Quantos intervalos quere que o histograma tenha (k)?\n");
        scanf("%i", &numIntervalos);

    } while (numIntervalos < 1 || numIntervalos > 9);

    do {

        printf("Quantos valores quere que o histograma receba (n)?\n");
        scanf("%i", &numValores);

    } while (numValores < 1);

    double arrayVect[numValores];

    srand ((unsigned) time(NULL));

    for (i = 0; i < numValores; i++) {

        arrayVect[i] = (double)rand() / RAND_MAX;

        //printf("%lf ",arrayVect[i]);

    }

    printf("\n\n\n");

    maxValor = maxVect(arrayVect, numValores);
    //printf("maxValor = %lf\n", maxValor);

    minValor = minVect(arrayVect, numValores);
    //printf("minValor = %lf\n", minValor);

    largura = (maxValor - minValor) / numIntervalos;
    //printf("largura = %lf\n", largura);

    arrayHisto = calculoHistograma(arrayVect, numValores, numIntervalos, largura, minValor);

    imprimirHistograma(arrayHisto, numIntervalos, largura, minValor);

    return 0;
}
