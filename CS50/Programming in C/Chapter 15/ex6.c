# include <stdio.h>

int main (int argc, char *argv[])
{
    char    toprint;
    int     nlns = 1;
    FILE    *in;
    // check number of arguments
    if ( argc != 2 )
    {
        printf ("Incorrect number of arguments.\n");
        return 1;
    }

    // attempt to open file for reading
    if ( !(in = fopen(argv[1], "r")) )
    {
        printf ("Failed to open file %s for reading.\n", argv[1]);
        return 2;
    }

    // printf 20 lines at a time
    while ( (toprint = getc(in)) != EOF ) {
        printf ("%c", toprint);
        if (toprint == '\n') {
            nlns++;
            if (nlns == 20) {
                nlns = 1;
                printf ("Enter 'q' to exit the program: ");
                if (getc(stdin) == 'q')
                    break;
            }
        }
    }

    return 0;
}
