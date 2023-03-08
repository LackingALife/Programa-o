#include <stdio.h>
#include <stdlib.h>

//Made by Pedro Rodrigues 106923
//Description:


short m;
int main()
{
    printf("Please insert the number of the month:\n");
    scanf("%hi", &m);
    switch (m)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("O mes tem 31 dias.\n");
        break;
    case 2:
        printf("O mes tem 28 dias.\n");
        break;
    case 4: case 6: case 9: case 11:
        printf("O mes tem 30 dias.\n");
        break;
    }


    return 0;
}
