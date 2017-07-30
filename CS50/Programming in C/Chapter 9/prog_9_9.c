// program to use the dictionary lookup program

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct entry {
    char word[15];
    char definition[50];
};

bool eqStr (const char s1[], const char s2[])
{
    int i = 0;
    bool equal;

    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;

    if (s1[i] == '\0' & s2[i] == '\0')
        equal = true;
    else
        equal = false;

    return equal;
}

// function to look up a word in a dictionary
int lookup (const struct entry dictionary[], const char search[],
    const int entries)
{
    // bool eqStr(const char s1[], const char s2[]);
    for (int i = 0; i < entries; i++)
        if (!strcmp(search, dictionary[i].word))
            return i;
    return -1;
}

int main (int argc, char *argv[])
{
    const struct entry dictionary[100] =
    {
        {"aardvark", "a burrowing African mammal"},
        {"abyss", "a bottomless pit"},
        {"acumen", "mentally sharp, keen"},
        {"addle", "to become confused"},
        {"aerie", "a high nest"},
        {"affix", "to append, attach"},
        {"agar", "a jelly made from seaweek"},
        {"ahoy", "a nautical call of greeting"},
        {"aigrette", "an ornamental cluster of feathers"},
        {"ajar", "partially opened"}
    };

    char word[15];
    int entries = 10;
    int entry;
    int lookup (const struct entry dictionary[], const char search[],
        const int entries);
    
    printf("Enter a word: ");
    scanf("%14s", word);
    entry = lookup(dictionary, word, entries);

    if (entry != -1)
        printf ("%s\n", dictionary[entry].definition);
    else
        printf ("Sorry, the word %s is not in my dictionary.\n", word);

    return 0;
}
