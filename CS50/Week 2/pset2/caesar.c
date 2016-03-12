# include <stdio.h>
# include <cs50.h>
# include <stdlib.h>
# include <ctype.h>

int main(int argc, string argv[])
{
    // break if the arguments supplied are not what was expected
    if ( argc < 2 || (argc > 2 && atoi(argv[1]) < 0) ) {
        printf ("\nInvalid argument(s): The program takes one single "
                "non-negative integer argument!\n\n");
        return 1;
    }
    else
        for ( int i = 0; argv[1][i]; i++ )
            if ( argv[1][i] != '-' && isdigit(argv[1][i]) == 0 ) {
                printf ("\nInvalid argument(s): A non-negative integer is "
                        "required!\n\n");
                return 1;
            }

    // declare variables
    int k = atoi(argv[1]); // key used for rotation
    string text;
    
    // close program if invalid number of arguments

    text = GetString();

    for ( int i = 0; text[i]; i++ )
        if ( text[i] >= 'A' && text[i] <= 'Z' )
        {
            printf ("%c", (text[i] - 'A' + k) % 26 + 'A');
        }
        else if ( text[i] >= 'a' && text[i] <= 'z' )
        {
            printf ("%c", (text[i] - 'a' + k) % 26 + 'a');
        }
        else 
            printf ("%c", text[i]);
    printf ("\n");

    return 0;
}
