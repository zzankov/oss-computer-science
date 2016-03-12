# include <stdio.h>
# include <cs50.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>

unsigned int vig_key (char c)
{
    if (!isalpha(c))
        return -1;
    else
        return tolower(c) - 'a';

}

char encrypt (char c, int key)
{
    if ( c >= 'A' && c <= 'Z' )
        c = (c - 'A' + key) % 26 + 'A';
    else if ( c >= 'a' && c <= 'z' )
        c = (c - 'a' + key) % 26 + 'a';
    return c;
}

int main(int argc, string argv[])
{
    // prototype function
    char encrypt (char c, int key);
    unsigned int vig_key (char c);

    // break if the arguments supplied are not what was expected
    if ( argc != 2 ) {
        printf ("\nInvalid argument(s): The program takes one single "
                "string as an argument!\n\n");
        return 1;
    }
    else
        for ( int i = 0; argv[1][i]; i++ )
            if ( !isalpha(argv[1][i]) ) {
                printf ("\nInvalid argument(s): The program takes one single "
                        "string as an argument!\n\n");
                return 1;
            }

    // declare variables
    string text = GetString();
    int key_len = strlen(argv[1]), j = 0;

    // print encrypted message
    for ( int i = 0; text[i]; i++ ) {
        printf ("%c", encrypt(text[i], vig_key(argv[1][j%key_len])));
        if ( isalpha(text[i]) )
            j++;
    }
    printf ("\n");

    return 0;
}
