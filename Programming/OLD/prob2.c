#include <stdio.h>
#include <stdlib.h>

//Made by Pedro Rodrigues 106923
//Description: "This program will take 2 times and calculate the positive difference.

int s1, s2, m1, m2, h1, h2, t1, t2, dt, ds, dm, dh;

/* INDEX:
s1 = seconds from the first time
m1 = minutes from the first time
h1 = hours from the first time
s2 = seconds from the second time
m2 = minutes from the second time
h2 = hours from the second time
t1 = first time in seconds
t2 = second time in second
ds = seconds of the difference
dm = minutes of the difference
dh = hours of the difference
*/

int main()
{
    printf("This program will take 2 times and calculate the positive difference.\n");
    printf("Please insert the first time,in hours (0-23), minutes (0-59) and seconds (0-59).\n");
    scanf("%i %i %i", &h1, &m1, &s1);
    printf("Please insert the second time, in hours (0-23), minutes (0-59) and seconds (0-59).\n");
    scanf("%i %i %i", &h2, &m2, &s2);

    t1 = s1 + m1 * 60 + h1 * 3600;
    t2 = s2 + m2 * 60 + h2 * 3600;


    dt = abs(t1 - t2);


    dh = dt / 3600;
    dm = (dt % 3600) / 60;
    ds = (dt % 3600) % 60;


    printf("The difference is:\n%i hours, %i minutes and %i seconds.\n", dh, dm, ds);


    return 0;
}
