// Program to reverse the digits of a number (v2)

# include <stdio.h>
# include <stdbool.h>

int main(void)
{
    int number, right_digit;
    bool neg;
    
    printf ("Enter your number.\n");
    scanf  ("%i", &number);
    neg = number < 0;
    
    if ( neg )
        number = -number;
    
    do {
        right_digit = number % 10;
        printf ("%i", right_digit);
        number /= 10;
    } 
    while (number != 0);
    
    if ( neg )
        printf ("%c", '-');
    
    printf ("\n");
    
    return 0;
}
