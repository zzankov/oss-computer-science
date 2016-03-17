# include <stdio.h>
# include <cs50.h>
# include <stdlib.h>
# include <ctype.h>

int main(void)
{
    _Bool seek = 1;
    string name;
    name = GetString();
    
    for ( int i = 0; name[i]; i++ )
        if ( isalpha(name[i]) && seek ) {
            printf ("%c", toupper(name[i]));
            seek = 0;
        }
        else if (name[i] == ' ')
            seek = 1;


    printf ("\n");

    return 0;
}
