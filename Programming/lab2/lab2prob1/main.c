#include <stdio.h>
#include <stdlib.h>

void main()
{
    // receber n segundos a converter
    int n;
    scanf("%i", &n);


    // conversão dos segundos em horas minutos e segundos
    int h = n / 3600;
    int m = (n % 3600) / 60;
    int s = (n % 3600) % 60;


    //imprimir resultado
    printf("%i horas, %i minutos e %i segundos.", h, m, s);

    return;
}
