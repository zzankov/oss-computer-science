// Function to calculate the absolute value of a number # include <stdio.h>
#include <stdio.h>

float absoluteValue(float x) {
    return (x < 0) ? -x : x;
}

float squareRoot (float x, float epsilon) {
    static float guess = 1;
    guess = (x / guess + guess) / 2.0;
    printf ("%f\n", guess);
    if (absoluteValue(guess * guess - x) >= epsilon)
        return squareRoot(x, epsilon);
    else
        return guess;
}

int main (int argc, char *argv[])
{
    float epsilon = 0.00001;
    printf ("squareRoot (2.0) = %f\n\n", squareRoot(2.0, epsilon));
    printf ("squareRoot (144.0) = %f\n\n", squareRoot(144.0, epsilon));
    printf ("squareRoot (17.5) = %f\n\n", squareRoot(17.5, epsilon));

    return 0;
}