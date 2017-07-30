#include <stdio.h>
#include <stdbool.h>

int findString (char *source, char *search)
{
    int i = 0;
    _Bool match;
    while (*source)
    {
        match = true;
        for (int j = 0; search[j]; j++)
            if (source[j] != search[j])
                match = false;

        if (match)
            return i;
        i++;
        source++;
    }

    return -1;
}

int main (int argc, char *argv[])
{
    printf ("%i\n", findString("chatter box", "hat"));

    return 0;
}