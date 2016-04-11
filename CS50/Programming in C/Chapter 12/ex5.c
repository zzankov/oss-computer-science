# include <stdio.h>
# define SHIFT(X,n) ((n)<0?((X)>>(-n)):((X)<<(n)))

int main(void)
{
    printf ("SHIFT(1,1) = %i\n", SHIFT(1,1));
    printf ("SHIFT(1,3) = %i\n", SHIFT(1,3));
    printf ("SHIFT(4,5) = %i\n", SHIFT(4,5));

    return 0;
}
