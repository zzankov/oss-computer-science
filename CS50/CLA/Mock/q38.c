# include <stdio.h>
# define ONE 1
# define TWO    ONE + ONE

int main(void)
{
    int i = 2;
    i = i - 2 * TWO;
    printf ("%d\n", i);

    return 0;
}
