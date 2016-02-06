# include <stdio.h>
# include <string.h>
# include <cs50.h>

int main(void)
{
    string s = GetString();
    
    if ( s != NULL )
        for ( int i = 0; i < strlen(s); i++ )
            printf ("%c\n", s[i]);
}
