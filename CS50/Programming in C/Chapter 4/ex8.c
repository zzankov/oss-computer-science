# include <stdio.h>

int main(void)
{
    int n, number, triangularNumber, counter, counter_limit;
    
    printf ("How many triangular numbers do you want to calculate? ");
    scanf  ("%i", &counter_limit);
    
    for (counter = 1; counter <= counter_limit; counter++) {
        printf ("What triangular number do you want? ");
        scanf  ("%i", &number);
        
        triangularNumber = 0; // calc reset at this point
        
        for (n =  1; n <= number; n++)
            triangularNumber += n;
            
        printf ("Triangular number %i is %i\n", number, triangularNumber);
    }
    
    return 0;
}
