#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 1000

void prtCols(char *line, int m, int n)
{
    for ( ; m <= n && m < strlen(line); m++)
        printf("%c", line[m]);
    if (line[m] != '\n');
        printf("\n");
}

int main (int argc, char *argv[])
{
    int m, n;
    char fName[64], buffer[BUFF_SIZE];
    FILE *in;

    // check arguments
    if (argc != 3) {
        printf ("usage: ./ex5 m n\n");
        exit(EXIT_FAILURE);
    }
    if (!(m = atoi(argv[1]))) {
        printf ("integer expected for 'm'\n");
        exit(EXIT_FAILURE);
    }
    if (!(n = atoi(argv[2]))) {
        printf ("integer expected for 'n'\n");
        exit(EXIT_FAILURE);
    }

    printf("Give me a filename: ");
    scanf ("%63s", fName);

    // attempt to open file for reading
    if (!(in = fopen(fName, "r"))) {
        printf ("Could not open file %s for reading\n", fName);
        exit(EXIT_FAILURE);
    }

    do {
        if (fgets(buffer, BUFF_SIZE, in))
            prtCols(buffer, m, n);
    } while (!feof(in));

    return (EXIT_SUCCESS);
}