// Program to copy one file to another
#include <stdio.h>

int main (int argc, char *argv[])
{
    char inName[64], outName[64];
    FILE *in, *out;
    int c;

    printf ("Enter name of file to be copied: ");
    scanf ("%63s", inName);
    printf ("Enter name of output file: ");
    scanf ("%63s", outName);

    if (!(in = fopen(inName, "r"))) {
        printf ("Cannot open %s for reading.\n", inName);
        return 1;
    }

    if (!(out = fopen(outName, "w"))) {
        printf ("Cannot open %s for writing.\n", outName);
        return 2;
    }

    // copy in to out
    while ((c = getc(in)) != EOF)
        putc (c, out);

    // Close open files
    fclose(in);
    fclose(out);

    printf ("File has been copied.\n");

    return 0;
}