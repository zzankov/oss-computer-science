// Function to determine if a character is alphabetic
# include <stdio.h>
# include <stdbool.h>

/* Function to count the number of words in a string */
int countWords (const char  string[])
{
    int   i, wordCount = 0;
    bool  lookingForWord = true;

    for ( i = 0; string[i] ; i++ )
        if ( string[i] == ' ' )
            lookingForWord = true;
        else
            if ( lookingForWord )
            {
                wordCount++;
                lookingForWord = false;
            }
    return wordCount;
}

int main(void)
{
    const char text1[] = "It's awesome.";
    const char text2[] = "And here we go... again.";
    int   countWords (const char string[]);

    printf ("\'%s\' - words = %i\n", text1, countWords(text1));
    printf ("\'%s\' - words = %i\n", text2, countWords(text2));
    return 0;
}
