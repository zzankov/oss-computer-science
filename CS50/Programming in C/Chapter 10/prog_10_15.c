# include <stdio.h>
int stringLength (const char *string)
{
    const char *cptr = string;
    while ( *cptr )
        ++cptr;
    return cptr - string;
}

int main(void)
{
    int stringLength (const char *string);
    printf ("%i\t", stringLength("stringLength test"));
    printf ("%i\t", stringLength(""));
    printf ("%i\t", stringLength("complete"));
    printf ("\n");
    return 0;
}
