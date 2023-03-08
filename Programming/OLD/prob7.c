#include <stdio.h>
#include <stdlib.h>

//Made by Pedro Rodrigues 106923
//Description:
int i, u;
float a, n;
int main()
{
    printf("Please insert the number to be rounded and at what decimal places:\n");
    scanf("%f %i", &a, &n);


    for (i = -1; i < n; i++)
    {

        a = a * 10;

    }

    int b = a + 0.5;
    float c = b;

    for (u = -1; u < n; u++)
    {

        c = c / 10;

    }

    printf("The rounded number is %f.", c);







    return 0;
}
