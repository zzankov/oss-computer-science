# include <stdio.h>

int main(void)
{

    for ( int i = 1; i < 256; i++ ) {

        printf ("%3i is %1c", i, (char) i);
        if ( ( i + 1 ) % 5 == 0 )
            printf ("\n");
        else
            printf (" | ");
    }
}
