#include <stdio.h>

#define ISLOWER(c) ((c) >= 'a' && (c) <= 'z')
#define ISUPPER(c) ((c) >= 'A' && (c) <= 'Z')
#define ISALPHA(c) (ISLOWER((c)) || ISUPPER((c)))
#define ISDIGIT(c) ((c) >= '0' && (c) <= '9')
#define ISSPECIAL(c) !(ISALPHA((c)) || ISDIGIT((c)))

int main (int argc, char *argv[])
{
    printf ("ISSPECIAL(%c) = %i\n", 'f',ISSPECIAL('f'));
    printf ("ISSPECIAL(%c) = %i\n", 'F',ISSPECIAL('F'));
    printf ("ISSPECIAL(%c) = %i\n", '5',ISSPECIAL('5'));
    printf ("ISSPECIAL(%c) = %i\n", '~',ISSPECIAL('~'));

    return 0;
}