/*  Write a program to generate and display a table of n and n^2, for integer
    values of n ranging from 1 to 10. Be certain to print appropriate column
    headings.                                                               */
#include <stdio.h>

int main (int argc, char *argv[])
{
    printf("\nTABLE OF N AND N^2 FROM 1 TO 10\n\n");
    printf(" n \t  n^2\n");
    printf("---\t-----\n");
    for (int i = 1; i <= 10; i++)
        printf("%2i\t%5i\n", i, i * i);

    return 0;
}