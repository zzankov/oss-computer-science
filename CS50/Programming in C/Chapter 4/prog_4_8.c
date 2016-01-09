// Program to reverse the digits of a number

# include <stdio.h>

int main(void)
{
    int number, right_digit;
    
    printf ("Enter your digit.\n");
    scanf  ("%i", &number);
    
    while ( number != 0 ) {
        right_digit = number % 10;
        printf ("%i", right_digit);
        number /= 10;
    }
    
    printf ("\n");
    
    return 0;
}
