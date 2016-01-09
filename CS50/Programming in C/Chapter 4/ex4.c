/*  The factorial of an integer n, written n!, is the product of the
    consecutive integers 1 through n. For example, 5 factorial is calculated
    as
    
        5! = 5 * 4 * 3 * 2 * 1 = 120
    
    Write a program to generate and print a table of the first 10 factorials */
    
# include <stdio.h>

int main(void)
{
    int num = 1, factorial = 1;
    
    printf ("TABLE OF NUMBERS AND THEIR FACTORIALS\n\n");
    printf (" n     factorial of n\n");
    printf ("---    --------------\n");
    
    while ( num <= 10 ) {
        factorial *= num;
        printf ("%3i    %14i\n", num, factorial);
        num++;
    }
    
    return 0;
}
