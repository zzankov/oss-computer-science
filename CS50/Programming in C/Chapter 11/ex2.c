# include <stdio.h>
# include <string.h>

char *to_bin( char *dest, int n )
{
    dest[32] = '\0';
    for ( int i = 31; i >= 0; i-- ) {
        dest[i] = n % 2 + '0';
        n /= 2;
    }

    return dest;
}

int main(void)
{
    int n2 = -151;
    //char buff[32];

    for ( int i = 1; i < 6; i++ )
        printf ("n >> %i is %i\n", i, n2 >> i);
    return 0;
}
