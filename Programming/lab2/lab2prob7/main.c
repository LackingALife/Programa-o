#include <stdio.h>
#include <stdlib.h>

int main()
{

    //inicializaçao do input

    double realnum;
    int ndecimalspaces;

    //pedir input

    do {

        printf("Por favor escreva  o numero a ser arredondado e o numero de casas decimais(1-7)\n");
        if (scanf("%lf %i", &realnum, &ndecimalspaces) == 0) {

            printf("INVALID INPUT");
            return -1;

        }
    }
    while (realnum <= 0 || ndecimalspaces < 1 || ndecimalspaces > 7);

    //multplicar o numero real por 10 n vezes

    for (int i = 0; i < ndecimalspaces; i++) {

        realnum *= 10;

    }

    //arredondar tranformando o num inteiro

    long intnum = realnum + 0.5;
    double finalnum = intnum;

    //voltar à grandeza inicial

    for (int u = 0; u < ndecimalspaces; u++) {

        finalnum /= 10;

    }

    //imprimir resultado

    printf("O numero arredonda ás %i casas decimais é %.*lf\n", ndecimalspaces, ndecimalspaces, finalnum);
    printf("%lf", finalnum);

    return 0;
}
