# include <stdio.h>

int main(void)
{
    char t[] = {'x', 'z', 'Y', 'Z', '2', '0'};

    printf ("%d\n", t[ t[1] - t[0] - t[3] + t[2] + 3] - t[5]);

    return 0;
}
