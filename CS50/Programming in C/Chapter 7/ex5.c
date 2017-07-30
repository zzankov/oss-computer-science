// Function to calculate the absolute value of a number # include <stdio.h>
#include <stdio.h>

float absoluteValue(float x) {
    return (x < 0) ? -x : x;
}

double squareRoot (double x) {
    
    static double guess = 1;

    if (x < 1)
        return x;

    guess = (x / guess + guess) / 2.0;
    if ((float)(guess * guess / x) != 1)
        return squareRoot(x);
    else
        return guess;
}

int main (int argc, char *argv[])
{
    printf ("squareRoot (2.0) = %g\n\n", squareRoot(2.0));
    printf ("squareRoot (144.0) = %g\n\n", squareRoot(144.0));
    printf ("squareRoot (17.5) = %g\n\n", squareRoot(17.5));

    return 0;
}