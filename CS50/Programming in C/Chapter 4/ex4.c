/*  The factorial if an integer n, written n!, is the product of consecutive
    integers 1 through n. For example, 5 factorial is calculated as
    5! = 1 * 2 * 3 * 4 * 5  = 120
    Write a program to generate and print a table of the first 10 factorials */

#include <stdio.h>

int main (int argc, char *argv[])
{
    printf("TABLE OF FACTORIALS\n\n");
    printf(" n\tfactorial\n");

    for (int i = 1, j = 1; i <= 10; i++, j *= i)
        printf("%2i\t%9i\n", i, j);

    return 0;
}