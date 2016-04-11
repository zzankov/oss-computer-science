# include <stdio.h>
# define IS_UPPER_CASE(C)   (((C)>='A')&&((C)<='Z'))
# define IS_LOWER_CASE(C)   (((C)>='a')&&((C)<='z'))
# define IS_ALPHABETIC(C)   ((IS_UPPER_CASE(C))||(IS_LOWER_CASE(C)))

int main(void)
{
    char a, b;
    a = ' ';
    b = 'B';

    printf ("Is character variable 'a' alphabetic? %i\n", IS_ALPHABETIC(a));
    printf ("Is character variable 'b' alphabetic? %i\n", IS_ALPHABETIC(b));
    return 0;
}
