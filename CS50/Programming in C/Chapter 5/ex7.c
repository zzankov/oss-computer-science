// Program to generate a table of prime numbers

# include <stdio.h>

int main(void)
{
    int     p, d;
    _Bool   isPrime;
    
    printf ("2 ");
    
    for ( p = 3; p <= 100; p += 2 ) {
        isPrime = 1;
        
        for ( d = 3; d < p; d += 2 ) 
            if ( p % d == 0 ) {
                isPrime = 0;
                break;
            }
        
        if (isPrime == 0)
            continue;
        else
            printf ("%i ", p);
    }
    
    printf ("\n");
    return 0;
}
