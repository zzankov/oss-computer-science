# include <stdio.h>

int int_size()
{
    return sizeof(int) * 8;
}

int main(void)
{
    printf ("An int contains %i bits.\n", int_size());

    return 0;
}
