# include <stdio.h>

int main(void)
{
    int x = 1, y = 1;
    float k = -1e0, m = 2e1;

    printf ("%d\n", (x >= y) + (x >= y) + (k >= y) + (m >= k) + ('q' <= 'z'));

    return 0;
}
