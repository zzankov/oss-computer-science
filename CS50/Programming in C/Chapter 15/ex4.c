#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000

int main (int argc, char *argv[])
{
    if (argc != 3) {
        printf ("usage: ./ex4 file1 file2\n");
        exit(EXIT_FAILURE);
    }

    FILE *f1, *f2;
    char buffer[BUFFER_SIZE];

    if ( !(f1 = fopen(argv[1], "r")) ) {
        printf ("Cannot open file %s for reading.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ( !(f2 = fopen(argv[2], "r")) ) {
        printf ("Cannot open file %s for reading.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    //fgets()
    do {
        // read file 1 line
        if (fgets(buffer, BUFFER_SIZE, f1))
            fprintf(stdout, "%s", buffer);

        // read file 2 line
        if (fgets(buffer, BUFFER_SIZE, f2))
            fprintf(stdout, "%s", buffer);

    } while (!(feof(f1) && feof(f2)));

    return (EXIT_SUCCESS);
}