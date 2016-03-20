# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define _XOPEN_SOURCE

// function to iteratively increase a string with printable ASCII characters
void inc (char *p)
{
    int i;
    // loop through the characters in the string and check if they have all
    // reached their maximum values - in this case char #126
    for ( i = 0; i < 8 && p[i] == 126; i++ )
        if ( i >= 8 )
            exit(printf("Not found\n"));

    // the loop would have exited at the first instance where i is not the 
    // character #126. If that character is a null character set it to the
    // first character in the printable ASCII set - #32 or SPACE
    if ( !p[i] )
        p[i] = 32;

    // otherwise imply increase the character number by 1, e.g. if char # is 97
    // (or 'a') set the character to #98 (or 'b')
    else 
        p[i]++;

    // loop backwards through the string and set all previous characters to the
    // first printable ASCII character - 32
    while (--i >= 0) 
        p[i] = 32;
}

int main(int argc, char *argv[])
{
    char *crypt(const char *key, const char *salt);
    
    char d[] = {' ', 0, 0, 0, 0, 0, 0, 0, 0 };

    //for ( int i = 0; i < (95 + 95 + 95); i++ )
    //{
        //printf ("%s\n", d);
        //inc(d);
    //}

    char salt[] = "50";
    printf ("%s\n", crypt(argv[1], salt));

    return 0;
}
