/*  Write a program to generate and display a table of n and n^2 for integer
    values of n ranging from 1 to 10. Be certain to print appropriate column
    headings.                                                                */
    
# include <stdio.h>

int main(void)
{
    int n;
    
    printf ("TABLE OF NUMBERS AND THEIR SQUARES\n\n");
    printf (" n     n_squared\n");
    printf ("---    ---------\n");
    
    for ( n = 1; n <= 10; n++)
        printf ("%3i    %9i\n", n, n * n);
        
    return 0;
}
