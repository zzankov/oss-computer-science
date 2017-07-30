/*  Program to find the greatest common divisor
    of two non-negative integer values          */

#include <stdio.h>

int gcd(int u, int v) {
    if ((u % v) == 0)
        return v;
    else
        return gcd(v, u % v);
}

int main (int argc, char *argv[])
{
    int u, v, temp;
    printf ("Please type in two nonnegative integers.\n");
    scanf ("%i%i", &u, &v);

    printf ("Their greatest common divisor is %i\n", gcd(u,v));

    return 0;
}