# include <stdio.h>
# include <stdbool.h>

// prototying
bool isPrime (int);
double squareRoot (double x,double epsilon);
double absoluteValue (double x);

// varialbes
double const epsilon = 0.00001;
int num;
double guess = 1.0;

// main function
int main (void)
{
    printf ("Please give me an integer: ");
    scanf  ("%i", &num);

    printf ("Is number %i a prime number? %s\n", num,
            isPrime(num) ? "true" : "false");
    
    return 0;
}

// function to determine whether a number is prime or not
bool isPrime (int x)
{
    // if the number is equally divisible by 2 and not the number 2 then it is
    // not a prime number
    if ( x % 2 == 0 && x != 2 )
        return false;

    // check if the number is divisible by any odd numbers from 3 to the 
    // squared root of the number we are testing. If so the number is not
    // prime.
    for ( int i = 3; i <= squareRoot (x, epsilon); i += 2 )
    {
        if ( x % i == 0 )
            return false;
    }

    // if none of the tests so far are positive then the number is prime
    return true;
}

// function to return the absolute value of a number
double absoluteValue (double x)
{
    if ( x < 0 )
        x = -x;
    return x;
}

// function to calculate the square root of a number
double squareRoot (double x, double epsilon)
{
    // until the ratio of the guess vs the number less 1 becomes less than the
    // value given as epsilon, iteratively update guess according to the
    // formula
    while ( absoluteValue ( guess * guess / x - 1 ) >= epsilon )
        guess = ( x / guess + guess ) / 2.0;
    return guess;
}
