# include <stdio.h>

int f(char t[])
{
    return t[1] - t[0];
}

int main(void)
{
    int i = 2;
    i -= f("ABDGK" + 1);
    printf ("%d\n", i);
    return 0;
}

