# include <cs50.h>
# include <stdio.h>

int main(void)
{
    const char  c = '#';
    int         height, i, base;

    do 
    {
        printf ("Height: ");
        height = GetInt();
    } while ( height < 0 || height > 23 );

    for ( i = 1; i <= height; i++ )
    {
        base = 0;
        while ( base < height )
        {
            if ( base < (height - i) )
                printf ("%c", ' ');
            else
                printf ("%c", c);

            base++;
        }
        
        printf ("%2c", ' ');

        while ( base < height * 2 )
        {
            if ( base < (i + height) )
                printf ("%c", c);

            base++;
        }

        printf ("\n");
    }

    return 0;
}
