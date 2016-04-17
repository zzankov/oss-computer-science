// Program to copy one file to another
# include <stdio.h>
int main(void)
{
    char        inName[64], outName[64];
    FILE        *in, *out;
    int         c;
    
    // get filename from user
    printf ("Enter name (or path) of file to be copied: ");
    scanf  ("%63s", inName);
    printf ("Enter name (or path) of output file: ");
    scanf  ("%63s", outName);

    // open input and output files
    if ( !(in = fopen(inName, "r")) ) {
        printf ("Can't open %s for reading.\n", inName);
        return 1;
    }
    if ( !(out = fopen(outName, "w")) ) {
        printf ("Can't open %s for writing.\n", outName);
        return 2;
    }

    // copy in to out
    while ( (c = getc(in)) != EOF )
        putc (c, out);

    // close both files
    fclose(in);
    fclose(out);
    printf ("The file has been copied\n");
    return 0;
}
