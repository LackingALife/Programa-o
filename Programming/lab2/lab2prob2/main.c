#include <stdio.h>
#include <stdlib.h>

int main()
{
    //inicialização de variaveis a receber (input)
    int hora1, min1, seg1, hora2, min2, seg2;

    //receber variaveis do primeiro tempo rejeitando valores fora de escala
    do {
            printf("Insert first time (h m s)\n");
            scanf("%i %i %i", &hora1, &min1 , &seg1);
    }
    while (hora1 < 0 || hora1 > 23 || min1 < 0 || min1 > 59 || seg1 < 0 || seg1 > 59);

    //receber variaveis do segundo tempo rejeitando valores fora de escala
    do {
            printf("Insert second time(h m s)\n");
            scanf("%i %i %i", &hora2, &min2 , &seg2);
    }
    while (hora2 < 0 || hora2 > 23 || min2 < 0 || min2 > 59 || seg2 < 0 || seg2 > 59);

    //Conversao do input em segundos
    int time1 = 3600 * hora1 + 60 * min1 + seg1;
    int time2 = 3600 * hora2 + 60 * min2 + seg2;

    //calculo da diferença
    int time3 = abs(time1 - time2);

    //conversao em horas minutos e seg
    int hora3 = time3 / 3600;
    int min3 = (time3 % 3600) / 60;
    int seg3 = (time3 % 3600) % 60;

    //imprimir resultado final
    printf("(h m s) %i %i %i", hora3, min3, seg3);

    return 0;
}
