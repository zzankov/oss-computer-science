# include <stdio.h>

int main(void)
{
    int numbers[10] = {1};
    int i, j;

    for ( j = 0; j < 10; ++j )
        for ( i = 0; i < 10; i++ )
            numbers[j] += numbers[i];
    
    for ( j = 0; j < 10; ++j )
        printf ("%i ", numbers[j]);

    printf ("\n");

    return 0;
}
