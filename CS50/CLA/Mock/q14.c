# include <stdio.h>

int main(void)
{
    int i = 1, j;

    for ( j = 0; j; j-- )
        i *= 2;

    printf ("%d\n", i + j);

    return 0;
}
