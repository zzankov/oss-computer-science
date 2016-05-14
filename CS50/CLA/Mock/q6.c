# include <stdio.h>

int main(void)
{
    float X = 2.;
    X = X + X * 4;
    X = X / X * X;
    X = X / X + X;

    printf ("%.4f\n", X);

    return 0;
}
