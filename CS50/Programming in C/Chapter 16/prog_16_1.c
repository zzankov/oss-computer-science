#include <stdio.h>

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
    
    fprintf(stdout, "File has been copied.\n");

    fclose(in);
    fclose(out);

    return 0;
}