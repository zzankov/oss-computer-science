#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    FILE *in, *out;
    int c;

    if (argc != 3) {
        fprintf(stderr, "Need two file names\n");
        return 1;
    }

    if ( !(in = fopen(argv[1], "r")) ) {
        fprintf(stderr, "Could not open file %s for reading\n", argv[1]);
        return 2;
    }

    if ( !(out = fopen(argv[2], "w")) ) {
        fprintf(stderr, "Could not open file %s for writing\n", argv[2]);
        return 3;
    }

    while ( (c = getc(in)) != EOF )
        putc (c, out);
    
    fclose(in);
    fclose(out);

    if ( !(in = fopen(argv[1], "r")) ) {
        fprintf(stderr, "Could not open file %s for reading\n", argv[1]);
        return 2;
    }

    if ( !(out = fopen(argv[2], "r")) ) {
        fprintf(stderr, "Could not open file %s for writing\n", argv[2]);
        return 3;
    }

    while ( getc(in) == getc(out) && !feof(in) && !feof(out))
        ;

    if (!(feof(in) && feof(out)) )
        fprintf(stdout, "File was not copied properly\n");
    else
        fprintf(stdout, "File has been copied.\n");

    fclose(in);
    fclose(out);

    return 0;
}