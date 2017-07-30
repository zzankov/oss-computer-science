// Function to count the number of characters in a string
#include <stdio.h>

int stringLength (const char str[]) {
    int count = 0;
    while (str[count])
        count++;

    return count;
}

int main (int argc, char *argv[])
{
    int stringLength (const char str1[]);
    const char word1[] = {'a','s','t','e','r','\0'};
    const char word2[] = {'a','t','\0'};
    const char word3[] = {'a','w','e','\0'};

    printf ("%i %i %i\n", stringLength(word1), stringLength(word2),
        stringLength(word3));

    return 0;
}