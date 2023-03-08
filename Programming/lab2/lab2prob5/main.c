#include <stdio.h>
#include <stdlib.h>


#define radiomax 3e+9
#define micromax 3e+12
#define inframax 4.3e+14
#define visablemax 7.5e+14
#define ultravioletmax 3e+17
#define xraysmax 3e+19


int main()
{
    //iniciar variavel da frequenci

    double freq;

    //pedir input (frequencia)

    do {

        printf("Insira a frequencia da radiaçao magentica\n");
        if (scanf("%lf", &freq) < 1) {

            printf("Invalid input, please write the value as a number\n");

        }
    }
    while (freq < 0);

    //Comparação do input com cada max do menor para o maior

    if (freq < radiomax) {

        printf("A radiaçao magnetica é ondas Radio");

    } else if (freq < micromax) {

        printf("A radiaçao magnetica é Microondas");

    } else if (freq < inframax) {

        printf("A radiaçao magnetica é luz Infravermelha");

    } else if (freq < visablemax) {

        printf("A radiaçao magnetica é luz Visivel");

    } else if (freq < ultravioletmax) {

        printf("A radiaçao magnetica é luz Ultravioleta");

    } else if (freq < xraysmax) {

        printf("A radiaçao magnetica é raios X");

    } else {

        printf("A radiaçao magnetica é raios Gama");

    }

    return 0;
}
