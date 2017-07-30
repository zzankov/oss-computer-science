// Program to categorize a single character that is entered at the terminal

#include <stdio.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
    char c;

    printf ("Enter a single character: ");
    scanf ("%c", &c);

    if (isalpha(c))
        printf ("It's an alphabetic character.\n");
    else if (isdigit(c))
        printf ("It's a digit.\n");
    else
        printf ("It's a special character.\n");

    // if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
    //     printf ("It's an alphabetic character.\n");
    // else if (c >= '0' && c <= '9')
    //     printf ("It's a digit.\n");
    // else
    //     printf ("It's a special character.\n");
    
    return 0;
}