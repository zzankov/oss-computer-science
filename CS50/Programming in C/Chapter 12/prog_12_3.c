/* Program to illustrate the use of the #include statement
 * Note: This program assumes that definitions are
 * set up in a file called metric.h                             */
#include <stdio.h>
#include "metric.h"

int main (int argc, char *argv[])
{
    float liters, gallons;
    printf ("*** Liters to Gallon ***\n\n");
    printf ("Enter the number in liters: ");
    scanf ("%f", &liters);

    gallons = liters * QUARTS_PER_LITER / 4.0;
    printf ("%g liters = %g gallons\n", liters, gallons);

    return 0;
}