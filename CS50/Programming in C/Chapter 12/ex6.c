# include <stdio.h>
# define IS_UPPER_CASE(C)   (((C)>=65)&&((C)<=90))

int main(void)
{
    char a, b;
    a = 'a';
    b = 'B';

    printf ("Is character variable 'a' upper case? %i\n", IS_UPPER_CASE(a));
    printf ("Is character variable 'b' upper case? %i\n", IS_UPPER_CASE(b));
}
