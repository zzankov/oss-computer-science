#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFFSIZE 1000
int main (int argc, char *argv[])
{
    char c = 0;
    int i = 1;
    char buffer[BUFFSIZE];
    FILE *f;

    // check for correct number of arguments
    if (argc != 2) {
        printf ("usage: ./ex6 fName");
        exit(EXIT_FAILURE);
    }

    if (!(f = fopen(argv[1], "r"))) {
        printf ("could not open file %s for reading\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (tolower(c) != 'q' && fgets(buffer, BUFFSIZE, f))
    {
        printf ("%i %s", i, buffer);

        if (i % 20 == 0) 
            c = getchar();
        i++;
    }

    return EXIT_SUCCESS;
}