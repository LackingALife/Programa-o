#include <stdio.h>
#include <stdlib.h>


//Made by Pedro Rodrigues 106923
//Description:

int f, s ,t, n;
int main()
{

    printf("Please insert 3 characters:\n");
    scanf("%i %i %i", &f, &s, &t);

    n = 2 * (f * 100 + s * 10 + t);

    printf("The double of the number formed by this digits is %i", n);

    return 0;
}
