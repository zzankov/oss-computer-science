#include <stdio.h>

void substring (char *source, int start, int count, char *result)
{
    
    char *end = &source[start + count];
    source += start;

    while (source < end && *source)
        *(result++) = *(source++);
    
    *result = '\0';

}

int main (int argc, char *argv[])
{
    char *str = "character";
    char buffer[81];

    substring(str, 4, 3, buffer);

    printf ("%s\n", buffer);

    substring("two words", 4, 20, buffer);

    printf ("%s\n", buffer);

    return 0;
}