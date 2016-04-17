# include <stdio.h>
# include <ctype.h>

int main( int argc, char *argv[] )
{
    FILE *in, *out;
    int c;

    // check if correct number of argumesnts is passed
    if ( argc != 3 )
    {
        printf ("Incorrect number of arguments passed.\n");
        return 1;
    }

    // try to open file for reading
    if ( !(in = fopen(argv[1], "r")) )
    {
        printf ("Cannot open file %s for reading.\n", argv[1]);
        return 2;
    }

    // try to open file for writing
    if ( !(out = fopen(argv[2], "w")) )
    {
        printf ("Cannot open file %s for writing.\n", argv[2]);
        return 3;
    }

    // copy input file onto the output file
    while ( (c = getc(in)) != EOF )
        putc(tolower(c), out);

    // close files
    fclose(in);
    fclose(out);

    return 0;
}
