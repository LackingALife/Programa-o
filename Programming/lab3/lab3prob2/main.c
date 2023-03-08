#include <stdio.h>
#include <stdlib.h>

int numero, i, u;

int factorial(int x) {

    int factor = 1;

    for (int v = 1; v <= x; v++) {

        factor *= v;

    }

    return factor;

}

int combinação(int n, int k) {

    numero = factorial(n) / (factorial(k) * factorial(n - k));

    return numero;

}

int main()
{
    int linhas;

    do {

        printf("Quantas linhas quer que o triângulo de Pascal tenha?\n");
        scanf("%i", &linhas);
        printf("\n\n");

    } while (linhas < 1);

    for (int i = 0; i < linhas; i++) {

        for (int u = 0; u <= linhas - i + 10; u++) {

            printf("  ");

        }

        for (int u = 0; u <= i; u++) {

            printf("%4i", combinação(i, u));


        }

        printf("\n");

    }


    return 0;

}
