// Function to calculate the absolute value of a number # include <stdio.h>
#include <stdio.h>

float absoluteValue(float x) {
    return (x < 0) ? -x : x;
}

double squareRoot (double x) {
    const double epsilon = 0.000000001;
    static double guess = 1;
    guess = (x / guess + guess) / 2.0;

    if (absoluteValue(guess * guess - x) >= epsilon)
        return squareRoot(x);
    else
        return guess;
}

int main (int argc, char *argv[])
{
    printf ("squareRoot (2.0) = %f\n", squareRoot(2.0));
    printf ("squareRoot (144.0) = %f\n", squareRoot(144.0));
    printf ("squareRoot (17.5) = %f\n", squareRoot(17.5));

    return 0;
}