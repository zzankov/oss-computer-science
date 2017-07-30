#include <stdio.h>

#define IS_UPPER_CASE(c) ((c) >= 'A' && (c) <= 'Z')

int main (int argc, char *argv[])
{
    printf ("IS_UPPER_CASE(%c) = %i\n", 'f', IS_UPPER_CASE('f'));
    printf ("IS_UPPER_CASE(%c) = %i\n", 'F', IS_UPPER_CASE('F'));

    return 0;
}