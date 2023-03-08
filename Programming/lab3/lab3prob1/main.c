#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero1, numero2, resultado, resposta, i;

    time_t tempo;

    printf("Escreva 0 para sair.\n");

    while (0 == 0) {

        i = 0;

        srand((int) time(&tempo));

        numero1 = rand() % 9 + 1;
        numero2 = rand() % 9 + 1;

        resultado = numero1 * numero2;

        printf("%i vezes %i = ?\n", numero1, numero2);
        do {

            scanf("%i", &resposta);

            if (resposta == 0) {

                return 1;

            } else if (resposta == resultado ) {

                printf("Correto!\n");
                i++;

            } else {

                printf("Errado. Tenta outra vez!\n");

            }

        }
        while (i == 0);
    }


    return 0;
}
