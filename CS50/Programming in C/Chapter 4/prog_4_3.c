// Program to generate a table of triangular numbers

#include <stdio.h>

int main (int argc, char *argv[])
{
    int n, triangularNumber = 0;
    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n \tSum from 1 to n\n");
    printf("---\t---------------\n");

    for(n = 0; n <= 10;n++, triangularNumber += n)
        printf("%3i\t%15i\n", n, triangularNumber);

    return 0;
}