#include <stdio.h>
#include <stdlib.h>

int* getValores(int *numInt) {

    int numIntInput, i;

    do {

        printf("Quantos números inteiros pretende intruduzir?\n");
        scanf("%i", &numIntInput);

    } while (numIntInput < 1);

    *numInt = numIntInput;

    int *arrayInput = (int*) malloc((*numInt) * sizeof(int));

    for (i = 0; i < *numInt; i++) {

            do {

                printf("Insira o %iº digito do numero a ser codificado:\n", i + 1);
                scanf("%i", &arrayInput[i]);

            } while (arrayInput[i] < 0 || arrayInput[i] > 9);

        }

    return arrayInput;

}

char* codificar(int arrayInput[], int numInt) {

    int i, j = 0, contagem = 1;

    char* arrayCoded = (char*) malloc(numInt * 2 * sizeof(char));

    for (i = 0; i < numInt; i++) {

        if (arrayInput[i] == arrayInput[i + 1]) {

            contagem++;

        } else if (i == numInt - 1) {

            arrayCoded[j] = contagem + '0';
            arrayCoded[j + 1] = arrayInput[i] + '0';
            arrayCoded[j + 2] = '\0';

        } else {

            if (contagem > 9) {

                arrayCoded[j] = '9';

                arrayCoded[j + 1] = arrayInput[i] + '0';

                j += 2;

                contagem -= 9;

            }

            arrayCoded[j] = contagem + '0';

            arrayCoded[j + 1] = arrayInput[i] + '0';

            j += 2;

            contagem = 1;

        }

    }

    return arrayCoded;

}

int* descodificar(char arrayCoded[], int numInt) {

    int* arrayDecoded = (int*) malloc(numInt * sizeof(int));

    int i, j, p = 0;

    for (i = 0; arrayCoded[i] != '\0'; i += 2) {

        for (j = arrayCoded[i] - '0'; j > 0; j--) {

            arrayDecoded[p] = arrayCoded[i + 1] - '0';
            p++;

        }

    }

    return arrayDecoded;

}

int main()
{
    int numInt, i;

    int* arrayInput = getValores(&numInt);

    printf("Numero inserido: ");

    for (i = 0; i < numInt; i++) {

        printf("%i", arrayInput[i]);

    }

    char* arrayCoded = codificar(arrayInput, numInt);

    printf("\nCodificado: %s\n", arrayCoded);

    int* arrayDecoded = descodificar(arrayCoded, numInt);

    printf("Numero descodificado: ");

    for (i = 0; i < numInt; i++) {

        printf("%i", arrayDecoded[i]);

    }

    return 0;
}
