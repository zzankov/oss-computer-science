// Function to count the number of characters in a string
# include <stdio.h>

int stringLength (const char string[])
{
    int   count = 0;
    while ( string[count] != '\0' )
        count++;
    return count;
}

int main (void)
{
    // prtotype
    int   stringLength (const char string[]);

    const char word1[] = { 'a', 's', 't', 'e', 'r', '\0' };
    const char word2[] = "at\0";
    const char word3[] = { "awe\0" };

    printf ("%i\t%i\t%i\n", stringLength (word1),
            stringLength (word2), stringLength (word3));

    return 0;
}
