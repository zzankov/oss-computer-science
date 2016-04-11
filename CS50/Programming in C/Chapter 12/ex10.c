# include <stdio.h>
# define printx(n)  printf("%i\n", x ## n)

int main(void)
{
    int x1=1, x2=2, x3=3;

    for ( int i = 1; i < 4; i++ )
        printx(i);

    return 0;
}
