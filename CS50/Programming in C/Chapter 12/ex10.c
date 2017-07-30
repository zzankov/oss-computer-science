# include <stdio.h>
# define printx(n)  printf("%i\n", x ## n)

int main(void)
{
    int x1=1, x2=2, x3=3, xi = 5;

    for ( int i = 1; i < 4; i++ )
        printx(i);      // i does not evaluate resulting in 'xi' variable only being displayed

    return 0;
}
