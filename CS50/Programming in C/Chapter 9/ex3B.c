# include <stdio.h>
# include <stdbool.h>

void readLine (char buffer[])
{
    char  character;
    int   i = 0;

    do
    {
        character = getchar();
        buffer[i] = character;
        ++i;
    }
    while ( character != '\n' );
    buffer[i - 1] = '\0';
}

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
    char text[81];
    int  totalWords = 0;
    int  countWords (const char string[]);
    void readLine(char buffer[]);
    bool endOfText = false;
    printf ("Type in your text.\n");
    printf ("When you are done, press 'RETURN'.\n\n");
    while ( ! endOfText )
    {
        readLine(text);
        if ( text[0] == '\0' )
            endOfText = true;
        else
            totalWords += countWords (text);
    }
    printf ("\nThere are %i words in the above text.\n", totalWords);
    return 0;
}
