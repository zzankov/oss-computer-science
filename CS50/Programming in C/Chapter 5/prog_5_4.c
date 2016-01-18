// Program to determine whether a number is even or odd (Ver. 2)

# include <stdio.h>

int main(void)
{
    unsigned long long int number_to_test, remainder;
    
    printf ("Enter your number to test: ");
    scanf  ("%lli", &number_to_test);
    
    remainder = number_to_test % 2;
    
    printf ( "The number %lli is ", number_to_test);
    if ( remainder == 0 )
        printf ("even.\n");
    else
        printf ("odd.\n");
        
    return 0;
}
