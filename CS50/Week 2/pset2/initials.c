# include <stdio.h>
# include <cs50.h>

int main(void)
{
    int i;
    _Bool space;
    string name;
    name = GetString();
    space = 1;

    for ( i = 0; name[i]; i++ ) {
        if ( space ) {
            if ( name[i] >= 'a' && name[i] <= 'z' )
                printf ("%c", name[i] - ' ');
            else
                printf ("%c", name[i]);
            space = 0;
        }
        else if (name[i] == ' ')
            space = 1;
    }
    printf ("\n");

    return 0;
}
