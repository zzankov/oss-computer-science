// Program to determine if a year is a leap year

# include <stdio.h>

int main(void)
{
    int year, rem_4, rem_100, rem_400;
    
    printf ("Enter a year to test: ");
    scanf  ("%i", &year);
    
    rem_4 = year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;
    
    printf ("The year %i is ", year);
    
    if ( (rem_4 == 0 && rem_100 != 0) || rem_400 == 0 )
        printf ("a leap year.\n");
    else
        printf ("not a leap year.\n");
        
    return 0; 
}
