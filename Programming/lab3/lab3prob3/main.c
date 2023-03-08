#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int k, n, i, arrayHist[], u;
double arrayVect[];

/*void calculoHistograma(double arrayVect[n], int k, int n, int *arrayHist[k-1]);

void imprimirHistograma(int arrayHist[k - 1], double arrayVect[n], int k);*/

int* calculoHistograma(double arrayVect[n], int k, int n, int *arrayHist[k-1]) {

    double maxVect, minVect, largura;
    int lugar;

    for (i = 0; i < k; i++) {

        arrayHist[i] = 0;

    }

    maxVect = arrayVect[0];
    minVect = arrayVect[0];

    for (i = 1; i < n; i++) {

        if (arrayVect[i] < minVect) {

            minVect = arrayVect[i];

        }

        if (arrayVect[i] > maxVect) {

            maxVect = arrayVect[i];

        }

    }

    largura = (maxVect - minVect) / k;

    for (i = 0; i < n; i++) {

        lugar = (arrayVect[i] - minVect) / largura;
        arrayHist[lugar]++;

    }

    return arrayHist;

}

void imprimirHistograma(int arrayHist[k - 1], double arrayVect[n], int k) {

    int maxHist;
    double maxVect, minVect;

    maxHist = arrayHist[0];

    for (i = 1; i < k - 1; i++) {

        if (arrayHist[i] > maxHist) {

            maxHist = arrayHist[i];

        }

    }

    for (i = maxHist; i > 0; i--) {

        printf("%i-     ", i);
        for (u = 0; u < k; u++) {

            if (arrayHist[u] <= i) {

                printf("  *  ");

            }

            if (arrayHist[u] > i) {

                printf("     ");

            }

        }

        printf("\n");

    }

    printf("--------");

    maxVect = arrayVect[0];
    minVect = arrayVect[0];

    for (i = 1; i < n; i++) {

        if (arrayVect[i] < minVect) {

            minVect = arrayVect[i];

        }

        if (arrayVect[i] > maxVect) {

            maxVect = arrayVect[i];

        }

    }

    largura = (maxVect - minVect) / k;

    for (i = 0;i < k; i++) {

        printf("%lf")

    }

    return;

}

int main()
{
    do {

        printf("Quantos intervalos quere que o histograma tenha (k)?\n");
        scanf("%i", &k);

    } while (k < 1);

    do {

        printf("Quantos valores quere que o histograma receba (n)?\n");
        scanf("%i", &n);

    } while (n < 1);

    time_t tempo;

    for (i = 0; i < n; i++) {

        srand ((unsigned) time(&tempo));

        arrayVect[i] = rand() % 1;

    }

    calculoHistograma(arrayVect, k, n, &arrayHist);

    imprimirHistograma(arrayHist[k - 1], arrayVect, k);

    return 0;
}
