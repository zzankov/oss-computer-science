#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isAlpha (const char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void readLine (char buffer[])
{
    char c;
    int i = 0;

    do
    {
        c = getchar();
        buffer[i] = c;
        i++;
    } while (c != '\n');
    buffer [i - 1] = '\0';
}

int countWords (const char str[]) {
    int wordCount = 0;
    bool looking = true;
    // bool isAlpha(const char c);

    for (int i = 0; str[i] != '\0'; i++)
        if ( str[i] != ' ' ) {
            if (looking) {
                wordCount++;
                looking = false;
            }
        } else
            looking = true;

    return wordCount;
}

int main (int argc, char *argv[])
{
    char text[81];
    int totalWords = 0;
    int countWords(const char str[]);
    void readLine(char buffer[]);
    bool endOfText = false;

    printf ("Type in text.\n");
    printf ("When you are done, press 'RETURN'.\n\n");

    while ( !endOfText ) {
        readLine(text);

        if ( !text[0] )
            endOfText = true;
        else
            totalWords += countWords(text);
    }

    printf ("\nThere are %i words in the above text.\n", totalWords);

    return 0;
}