#include <stdio.h>
#include <stdlib.h>

// print binary number
void bin_print(int n)
{
    int sz = sizeof(n) * 8;

    for (int i = sz - 1 ; i >= 0; i--)
        printf ("%c", abs(n >> i & 1) + '0');

    printf("\n");
}

int main (int argc, char *argv[])
{
    int i = -123;
    printf ("If 1's are passed to the left then arithmetic right shift "
        "otherwise it is a logical right shift.\n\n");
    bin_print(i);
    bin_print(i>>1);
    bin_print(i>>3);
    bin_print((unsigned int) ~0 >> (32 - 5));

    return 0;
}