# include <stdio.h>

int main(void)
{
    int X = 8;
    X = X - X / 2;
    X = X * X / 4;
    X = X + 2 * X;

    printf ("%i\n", X);

    return 0;
}
