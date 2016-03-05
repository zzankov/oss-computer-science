# include <stdio.h>

void to_upper (char source[])
{
    int i = 0;
    char mod = 'a' - 'A';
    while ( source[i] != '\0' )
    {
        if ( source[i] >= 'a' && source[i] <= 'z' )
            source[i] -= mod;
        i++;
    }
}

int main (void)
{
    char word[] = "This is really annoying though";

    printf ("text = '%s'\n", word);
    to_upper(word);
    printf ("converted = '%s'\n", word);
    return 0;
}
