// Mario task from week 1 of CS50
# include <stdio.h>
# include <cs50.h>

int main(void)
{
    int     height, base, i;
    
    do {
        printf ("Height: ");
        height = GetInt();
    } while ( height < 0 || height > 23 );

    for ( i = 0; i < height; i++ )
    {
        for ( base = 0; base < (height + 1); base ++ )
        {
            if ( base < (height - i - 1) )
                printf ("%c",' ');
            else
                printf ("%c",'#');
        }
        printf ("\n");
    }

}
