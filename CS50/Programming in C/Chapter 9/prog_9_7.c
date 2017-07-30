// Function to determine if a character is alphabetic
#include <stdio.h>
#include <stdbool.h>

bool isAlpha (const char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

// function to count the number of words in a string
int countWords (const char str[]) {
    int wordCount = 0;
    bool looking = true, isAlpha(const char c);

    for (int i = 0; str[i] != '\0'; i++)
        if (isAlpha(str[i])) {
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
    const char text1[] = "Well, here goes.";
    const char text2[] = "And here we go... again.";
    int countWords (const char str[]);

    printf ("%s - words = %i\n", text1, countWords(text1));
    printf ("%s - words = %i\n", text2, countWords(text2));

    return 0;
}