# include <stdio.h>

int main(void)
{
    int count = 10, x;
    int *ptr;
    ptr = &count;
    x = *ptr;
    printf ("count = %i, x = %i, ptr = %i\n", count, x, *ptr);
    x = 5;
    printf ("count = %i, x = %i, ptr = %i\n", count, x, *ptr);
    *ptr = 15;
    printf ("count = %i, x = %i, ptr = %i\n", count, x, *ptr);
    return 0;
}
