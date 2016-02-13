# include <stdio.h>
# include <stdbool.h>

int main (void)
{
    bool isPrime (int);
    int num;
    printf ("Please give me an integer: ");
    scanf  ("%i", &num);

    printf ("Is number %i a prime number? %s\n", num,
            isPrime(num) ? "true" : "false");
    
    return 0;
}

bool isPrime (int x)
{
    double squareRoot (double x,double epsilon);
    double epsilon = 0.00001;
    
    if ( x % 2 == 0 && x != 2 )
        return false;

    for ( int i = 3; i <= squareRoot (x, epsilon); i += 2 )
    {
        if ( x % i == 0 )
            return false;
    }

    return true;
}

double absoluteValue (double x)
{
    if ( x < 0 )
        x = -x;
    return x;
}

double squareRoot (double x, double epsilon)
{
    double guess = 1.0;
    double absoluteValue (double x);
    while ( absoluteValue ( guess * guess / x - 1 ) >= epsilon )
        guess = ( x / guess + guess ) / 2.0;
    return guess;
}
