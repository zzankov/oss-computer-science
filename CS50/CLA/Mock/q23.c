# include <stdio.h>

int main(void)
{
    char t[4][4];

    printf ("%d\n", sizeof(t) / sizeof(t[0]) / sizeof(t[0][0]));

    return 0;
}
