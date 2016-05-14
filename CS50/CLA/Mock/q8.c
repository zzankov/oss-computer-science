# include <stdio.h>

int main(void)
{
    int     X = 1, Y = X + 2, Z = Y++;

    Z = X / Y * --X * Y--;

    printf ("Y = %i\n", Y);

    return 0;
}
