// Program to sum the digits of a number

# include <stdio.h>

int main(void)
{
    int number, result = 0;
    
    printf ("Enter your digit (enter negative number to test behaviour). ");
    scanf  ("%i", &number);
    
    while ( number != 0 ) {
        result += number % 10;
        number /= 10;
    }
    
    printf ("The sum of the digits of your number is %i.\n", result);
    
    return 0;
}
