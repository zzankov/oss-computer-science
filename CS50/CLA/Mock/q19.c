# include <stdio.h>

int main(void)
{
    int i, t[4];

    for ( i = 0; i < 3; i++ ) {
        t[i] = 4 - i;
        t[i + 1] = 2 * t[i];
    }
    
    printf ("%d\n", t[2]);
    return 0;
}
