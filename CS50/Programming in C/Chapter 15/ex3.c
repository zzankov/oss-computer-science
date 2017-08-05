#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{

    if (argc != 3) {
        printf ("usage: ./ex3 inFileName outFileName\n");
        exit(EXIT_FAILURE);
    }
    
    FILE *in, *out;
    char c;

    if (!(in = fopen(argv[1], "r"))) {
        printf ("File %s could not be open for reading.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if (!(out = fopen(argv[2], "w"))) {
        printf ("File %s could not be open for writing.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((c = getc(in)) != EOF){
        c = toupper(c);
        putc(c, out);
    }

    printf("File copied and capitalized successfully.\n");

    return EXIT_SUCCESS;
}