#include <stdio.h>

long int x_to_the_n(int x, unsigned int n) {
    long int result = 1;
    for (int i = 0; i < n; ++i, result *= x)
        ;
    
    return result;
}

int main (int argc, char *argv[])
{
    for (int i = 0; i < 5; ++i)
        for ( int j = 0; j < 5; j++)
            printf ("%i^%i = %li\n", i, j, x_to_the_n(i, j));

    return 0;
}