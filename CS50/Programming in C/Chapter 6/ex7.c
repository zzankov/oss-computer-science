#include <stdio.h>
#include <stdbool.h>

int main (int argc, char *argv[])
{
    int n = 150;
    int P[n];

    for (int i = 2; i <= n; ++i)
        P[i] = 0;

    for (int i = 2; i <= n; ++i)
        for (int j = 2; j < n; ++j)
            if (i * j <= n)
                P[i*j] = 1;
    
    for ( int i = 2; i <= n; ++i)
        if (!P[i])
            printf ("%i ", i);
    
    printf ("\n");

    return 0;

}