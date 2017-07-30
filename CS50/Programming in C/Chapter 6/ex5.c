#include <stdio.h>

int main (int argc, char *argv[])
{
    int numbers[10] = {1, 0};

    for ( int j = 0; j < 10; j++ )
        for (int i = 0; i < j; i++ )
            numbers[j] += numbers[i];

    for ( int j = 0; j < 10; j++ )
        printf ("%i ", numbers[j]);

    printf ("\n");

    return 0;
}