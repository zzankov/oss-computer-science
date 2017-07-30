// Function to calculate the absolute value of a number # include <stdio.h>
#include <stdio.h>

float absoluteValue(float x) {
    return (x < 0) ? -x : x;
}

float squareRoot (float x, float guess) {
    const float epsilon = 0.00001;

    if (absoluteValue(guess * guess - x) >= epsilon)
        return squareRoot(x, (x / guess + guess) / 2.0);
    else
        return guess;

    // while ( absoluteValue (guess * guess - x) >= epsilon )
    //     guess = (x / guess + guess) / 2.0;
    
    // return guess;
}

int main (int argc, char *argv[])
{
    printf ("squareRoot (2.0) = %f\n", squareRoot(2.0, 1));
    printf ("squareRoot (144.0) = %f\n", squareRoot(144.0, 1));
    printf ("squareRoot (17.5) = %f\n", squareRoot(17.5, 1));

    return 0;
}