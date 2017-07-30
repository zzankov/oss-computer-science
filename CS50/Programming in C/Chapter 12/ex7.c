#include <stdio.h>

#define ISLOWER(c) ((c) >= 'a' && (c) <= 'z')
#define ISUPPER(c) ((c) >= 'A' && (c) <= 'Z')
#define IS_ALPHABETIC(c) (ISLOWER((c)) || ISUPPER((c)))

int main (int argc, char *argv[])
{
    printf ("IS_ALPHABETIC(%c) = %i\n", 'F', IS_ALPHABETIC('F'));
    printf ("IS_ALPHABETIC(%c) = %i\n", 'f', IS_ALPHABETIC('f'));
    printf ("IS_ALPHABETIC(%c) = %i\n", '1', IS_ALPHABETIC('1'));

    return 0;
}