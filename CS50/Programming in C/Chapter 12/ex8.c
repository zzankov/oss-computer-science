# include <stdio.h>
# define IS_UPPER_CASE(C)   (((C)>='A')&&((C)<='Z'))
# define IS_LOWER_CASE(C)   (((C)>='a')&&((C)<='z'))
# define IS_ALPHABETIC(C)   ((IS_UPPER_CASE(C))||(IS_LOWER_CASE(C)))
# define IS_NUMERIC(C)      (((C)>='0')&&((C)<='9'))
# define IS_SPECIAL(C)      ((!(IS_ALPHABETIC(C)))&&(!(IS_NUMERIC(C))))

int main(void)
{
    char a, b;
    a = ' ';
    b = 'B';

    printf ("Is character variable 'a' alphabetic? %i\n", IS_ALPHABETIC(a));
    printf ("Is character variable 'b' alphabetic? %i\n", IS_ALPHABETIC(b));
    printf ("Is character variable 'a' numeric? %i\n", IS_NUMERIC(a));
    printf ("Is character variable 'b' numeric? %i\n", IS_NUMERIC(b));
    printf ("Is character variable 'a' special? %i\n", IS_SPECIAL(a));
    printf ("Is character variable 'b' special? %i\n", IS_SPECIAL(b));

    return 0;
}
