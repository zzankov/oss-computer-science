# include <stdio.h>
# include <stdlib.h>

int main (int argc, char *argv[])
{
    // variable declarations
    int     m, n;
    char    str[1000];
    FILE    *in;

    // check if correct number of arguments
    if ( argc != 2 ) {
        printf ("Incorrect number of arguments.\n");
        return 1;
    }
    
    // attemp to open file for reading
    if ( !(in = fopen(argv[1], "r")) ) {
        printf ("Could not open file %s for reading.\n",
                argv[1]);
        return 2;
    }

    // get m and n
    printf ("Please give me column numbers m and n: ");
    scanf  ("%i%i", &m, &n);

    while ( fgets(str, 1000, in) ) 
        printf ("%.*s\n", n - m, str + m);
    
    return 0;
} 
