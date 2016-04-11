# include <stdio.h>
# define ABSOLUTE_VALUE(X)  (((X)<0)?(-(X)):(X))

int main(void)
{
    int a = -5;
    printf ("Absolute value of %i is %i\n", a, ABSOLUTE_VALUE(a));
    printf ("Absolute value of %i is %i\n", a + 2, ABSOLUTE_VALUE(a + 2));

    return 0;
}
