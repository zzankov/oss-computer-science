// Function to determine if two strings are equal
# include <stdio.h>
# include <stdbool.h>

bool equalStrings(const char str1[], const char str2[])
{
    int   i = 0;
    bool areEqual;

    while ( str1[i] == str2[i] && str1[i] )
        i++;
    if ( str1[i] == '\0' && str2[i] == '\0' )
        areEqual = true;
    else
        areEqual = false;
    return areEqual;
}

int main (void)
{
    // prototyping
    bool equalStrings(const char str1[], const char str2[]);
    const char stra[] = "string compare test";
    const char strb[] = "string";
    printf ("%i\n", equalStrings (stra, strb));
    printf ("%i\n", equalStrings (stra, stra));
    printf ("%i\n", equalStrings (strb, "string"));

    return 0;
}
