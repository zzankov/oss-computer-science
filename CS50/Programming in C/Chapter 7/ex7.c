# include <stdio.h>

int main (void)
{
    long int x_to_the_n (int x, int n);
    printf ("number %i to the %i = %li\n", 5, 2, x_to_the_n (5, 2));
    return 0;
}

long int x_to_the_n (int x, int n)
{
    for ( int i = 0; i < n - 1; i++ )
        x *= x;
    return x;
}
