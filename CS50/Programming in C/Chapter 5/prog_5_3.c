// Program to determine if a number is even or odd

# include <stdio.h>

int main(void)
{
    unsigned long long int number_to_test, remainder;
    
    printf ("Enter your number to be tested.: ");
    scanf  ("%lli", &number_to_test);
    
    remainder = number_to_test % 2;
    
    if ( remainder == 0 )
        printf ("The number %lli is even.\n", number_to_test);
    
    if ( remainder != 0 )
        printf ("The number %lli is odd.\n", number_to_test);
        
    return 0;
}
