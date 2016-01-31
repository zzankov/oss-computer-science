# include <stdio.h>

int main(void)
{
    int     x = 100;
    char    c = 'f';

    printf ("The expression x & (x - 1) for number %i returns %i.\n", x, (x & (x - 1)));
    printf ("The expression x & (x - 1) for character %c returns %c.\n", c, c & (c - 1));

    printf ("The expression x | (x + 1) for number %i returns %i.\n", x, x | (x + 1));
    printf ("The expression x | (x + 1) for character %c returns %c.\n", c, c | (c + 1));
    
    printf ("The expression x & (x + 1) for number %i returns %i.\n", x, x & (x + 1));
    printf ("The expression x & (x + 1) for character %c returns %c.\n", c, c & (c + 1));

    printf ("The expression x | (x - 1) for number %i returns %i.\n", x, x | (x - 1));
    printf ("The expression x | (x - 1) for character %c returns %c.\n", c, c | (c - 1));
    
    return 0;
}
