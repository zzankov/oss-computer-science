# include <stdio.h>

int main(void)
{
    char c = 'Q';
    char *charPtr = &c;
    printf ("%c\t%c\n", c, *charPtr);
    c = '/';
    printf ("%c\t%c\n", c, *charPtr);
    *charPtr = ')';
    printf ("%c\t%c\n", c, *charPtr);

    return 0;

}
