# include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *in, *out;
    int c;
    if ( argc != 3) {
        fprintf(stderr, "Need two file names\n");
        return 1;
    }

    if ( !(in = fopen(argv[1], "r")) )
    {
        fprintf(stderr, "Cannot read file %s.\n", argv[1]);
        return 2;
    }
    
    if ( !(out = fopen(argv[2], "w")) )
    {
        fprintf(stderr, "Cannot write file %s.\n", argv[2]);
        return 3;
    }

    while ( (c = getc(in)) != EOF )
        putc(c, out);
    printf ("File has been copied.\n");
    fclose(in);
    fclose(out);

    return 0;
}
