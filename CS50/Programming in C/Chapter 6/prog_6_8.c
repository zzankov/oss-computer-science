// Generate Fibonacci numbers using variable length arrays
#include <stdio.h>

int main (int argc, char *argv[])
{
    int numFibs;

    printf ("How many Fibonacci numbers do you want (between 1 and 75)? ");
    scanf ("%i", &numFibs);

    if (numFibs < 1 || numFibs > 75) {
        printf ("Bad number, sorry!\n");
        return 1;
    }

    unsigned long long int  Fibonacci[numFibs];

    Fibonacci[0] = 0;       // by definition
    Fibonacci[1] = 1;       // ditto

    for ( int i = 2; i < numFibs; ++i)
        Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];

    for ( int i = 0; i < numFibs; ++i)
        printf ("%llu ", Fibonacci[i]);
    
    printf ("\n");

    return 0;
}