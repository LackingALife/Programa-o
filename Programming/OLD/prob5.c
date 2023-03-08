#include <stdio.h>
#include <stdlib.h>

//Made by Pedro Rodrigues 106923
//Description:

#define f x

float x;
int main()
{

    printf("Please insert the frequency of the electromagnetic radiation to be evaluated (in scientific notation):\n");
    scanf("%e", &x);
    if (f < 3.0e+9) {
            printf("This electromagnetic radiation is Radio Wave.\n");
            return 0;
    }
    else if (f < 3.0e+12) {
            printf("This electromagnetic radiation is Microwave.\n");
            return 0;
    }
    else if (f < 4.3e+14) {
            printf("This electromagnetic radiation is Infrared Light.\n");
            return 0;
    }
    else if (f < 7.5e+14) {
            printf("This electromagnetic radiation is Visible Light.\n");
            return 0;
    }
    else if (f < 3.0e+17) {
            printf("This electromagnetic radiation is Ultraviolet Light.\n");
            return 0;
    }
    else if (f < 3.0e+19) {
            printf("This electromagnetic radiation is X-Rays.\n");
            return 0;
    }else{
        printf("This electromagnetic radiation is Gamma Rays.\n");
    }


    return 0;
}
