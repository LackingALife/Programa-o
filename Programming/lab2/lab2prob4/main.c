#include <stdio.h>
#include <stdlib.h>

int main()
{
    // inicialição do input

    char pri, seg, ter;

    // pedir input valido

    do {
        printf("Escreva 3 digitos decimais\n");
        if (scanf("%c %c %c", &pri, &seg, &ter) < 1){
            printf("Invalid input, please write each digit separated by a space\n");
        }
    }
    while (pri < '0' || pri > '9' || seg < '0' || seg > '9' || ter < '0' || ter > '9');

    //juntar algarismos num so numero

    char num[4] = {pri, seg, ter};

    //transformar a string em int

    int numpre = atoi(num);

    //calculo e impressao do numero final

    int numfinal = 2 * numpre;

    printf("o numero final é %i", numfinal);

    return 0;
}
