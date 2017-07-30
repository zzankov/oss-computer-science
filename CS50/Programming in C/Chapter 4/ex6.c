/*  A minus before the field width specification in a printf() statement causes
    text to be displayed left-justified.                                      */
    
#include <stdio.h>

int main (int argc, char *argv[])
{
    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n\ttriangular\n");
    printf("--\t----------\n");

    for (int i = 5; i <= 50; i += 5)
        printf("%2i\t%-10i\n", i, i * (i + 1) / 2 );

    return 0;
}