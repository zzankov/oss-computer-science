# include <stdio.h>

int main(void)
{
    int i = 1, j = 0;
    do {
        i *= 2;
        j += i / 2;
    } while (j < 1);

    printf ("%d\n", i + j);

    return 0;
}
