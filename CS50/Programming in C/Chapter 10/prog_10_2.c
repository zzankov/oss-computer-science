#include <stdio.h>

int main (int argc, char *argv[])
{
    char c = 'Q';
    char *cPtr = &c;

    printf ("%c %c\n", c, *cPtr);

    c = '/';
    printf ("%c %c\n", c, *cPtr);
    
    *cPtr = '(';
    printf ("%c %c\n", c, *cPtr);

    return 0;
}