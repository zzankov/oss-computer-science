# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void inc (char *p)
{
    int i;
    for ( i = 0; i < 8 && p[i]== 126; i++ )
        if ( i >= 8 )
            exit(printf("Not found\n"));
    if ( !p[i] )
        p[i] = 32;
    else p[i]++;
    while (--i >= 0) 
        p[i] = 32;
}
int main(void)
{
    unsigned long long int permut = 4900933563926400;
    int i = 0;

    char pass[] = {' ', 0, 0, 0, 0, 0, 0, 0, 0 };

    while (1) {
        if ( !strcmp (pass, "~~~~~~~~\0") )
            break;
        printf ("%8s\t%i\t%.8f\n", pass, strlen(pass), (float)i / permut);
        i++;
        inc(pass);
    }

    return 0;
}
