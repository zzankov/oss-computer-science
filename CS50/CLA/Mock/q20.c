# include <stdio.h>

int main(void)
{
    int i, s = 0, t[] = {16, 8, 4, 2, 1, 0};

    for ( i = 5; t[i] > 2; i /= 2)
        s += t[i];

    printf("%d\n", s);

    return 0;
}
