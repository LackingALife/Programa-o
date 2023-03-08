#include <stdio.h>
#include <stdlib.h>

int main()
{

    //inicializaçao do input

    int mes;

    //Pedir input

    do {

        printf("Por favor, insira o numero do mes:\n");
        if (scanf("%i", &mes) == 0) {

            printf("INVALID INPUT");
            return -1;

        }
    }
    while (mes < 1 || mes > 12);

    //atribuir a cada mes o seu numero de dias

    switch (mes) {

        case 1: case 3: case 5: case 7: case 8: case 10: case 12:

            printf("O mes tem 31 dias.");
            break;

        case 2:

            printf("O mes tem 28 dias.");
            break;

        case 4: case 6: case 9: case 11:

            printf("O mes tem 30 dias.");
            break;

        default:

            printf("INVALID VALUE");
            break;


    }


    return 0;
}
