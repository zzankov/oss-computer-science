// Program to echo a character until the end of file
#include <stdio.h>

int main (int argc, char *argv[])
{
    int c;

    while ( (c = getchar()) != EOF )
        putchar(c);

    return 0;
}