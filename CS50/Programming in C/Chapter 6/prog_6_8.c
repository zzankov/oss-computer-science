// Generate Fibonacci numbers using variable length arrays
# include <stdio.h>

int main(void)
{
    int i, numFibs;
    
    printf ("How many Fibonacci numbers do you want (between 1 and 75)? ");
    scanf  ("%i", &numFibs);

    if ( numFibs < 1 || numFibs > 75 ) {
        printf ("Bad number, sorry!\n");
        return 1;
    }

    unsigned long long int FibonacciNums[numFibs];
    FibonacciNums[0] = 0;   // by definition
    FibonacciNums[1] = 1;   // ditto
    
    printf ("%llu    %llu    ", FibonacciNums[0], FibonacciNums[1]);

    for ( i = 2; i <= numFibs - 1; i++ ) {
        FibonacciNums[i] = FibonacciNums[i - 1] + FibonacciNums[i - 2];
        printf ("%llu    ", FibonacciNums[i]);
    }

    printf ("\n");

    return 0;
}

