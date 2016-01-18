// Program to categorize a single character that is entered at the terminal

# include <stdio.h>

int main(void)
{
    char c;
    
    printf ("Enter a single character: ");
    scanf  ("%c", &c);
    
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        printf ("%c is an alphabetic character.\n", c);
    else if ( c >= '0' && c <= '9' )
        printf ("%c is a numeric character.\n", c);
    else
        printf ("%c is a special character.\n", c);
        
    return 0;
}
