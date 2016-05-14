# include <stdio.h>

int main(void)
{
    float a = 3.14E0, *b = &a, **c = &b;

    **c = a + ( a == *b );
    printf ("%f\n", a);

    return 0;
}
