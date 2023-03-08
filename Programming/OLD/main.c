#include <stdio.h>
//#include <stdlib.h>

int input, s, m, h;
int main()
{
    printf("Please insert the time you want to be converted:\n");
    scanf("%i", &input);
    h = input / 3600;
    m = (input % 3600) / 60;
    s = (input % 3600) % 60;
    printf("Your time converts to:\n%i hours, %i minutes and %i seconds.", h, m, s);


    return 0;
}
