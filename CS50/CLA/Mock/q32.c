# include <stdio.h>

float f(float v) {
    v = v / 2.0;
    return v + v;
}

int main(void)
{
    float x = 4;
    f(x);
    printf ("%f\n", x);

    return 0;
}
