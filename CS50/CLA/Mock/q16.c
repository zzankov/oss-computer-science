# include <stdio.h>

int main(void)
{
    int i = 1, j = 0, k;
    k = (i >> j) + (j >> i) + (i >> i) + (j >> j);
    k <<= i;
    printf ("%d\n", k);
    return 0;
}
