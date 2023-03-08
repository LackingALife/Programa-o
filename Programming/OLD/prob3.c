#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define g 9.8

//Made by Pedro Rodrigues 106923
//Description: This program will calculate where a basket should be for a given throw and if it will touch the roof


float deg, rad, v0, d, alt, h;

/* INDEX:
deg = angle of the throw in degrees
v0 = initial velocity
d = distance
alt = height of the roof
*/

int main()
{

    printf("This program will calculate where a basket should be for a given throw and if it will touch the roof.\n");
    printf("Please insert the angle of the throw, the initial velocity and the height of the roof:\n");
    scanf("%f %f %f", &deg, &v0, &alt);

    double rad = (deg * 2 * M_PI) / 360;

    d = (v0 * v0 * sin(2 * rad)) / g;

    h = (v0 * v0 * sin(rad) * sin(rad)) / (2 * g);

    if (h >= alt){

        printf("The projectile will hit the roof, making this direct throw impossible.\n");

    }else{

        printf("The basket must be place at a distance of %f meters.\n", d);

    }





    return 0;
}





