#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct entry {
    char word[15];
    char definition[50];
};

int compareStrings (const char s1[], const char s2[])
{
    int i = 0, answer;
    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    
    if ( s1[i] < s2[i] )
        answer = -1;
    else if (s1[i] == s2[i])
        answer = 0;
    else
        answer = 1;

    return answer;
}

void dictionarySort(struct entry dict[], int entries)
{
    struct entry temp;
    bool swapped;


    do
    {
        swapped = false;
        for (int i = 0; i < entries - 1; i++) {
            if (compareStrings(dict[i].word, dict[i+1].word) > 0) {
                temp = dict[i];
                dict[i] = dict[i+1];
                dict[i+1] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}

int main (int argc, char *argv[])
{
    void dictionarySort(struct entry dict[], int entries);
    struct entry dict[100] =
    {
        {"tashak", "a burrowing African mammal"},
        {"baba", "a bottomless pit"},
        {"laina", "mentally sharp, keen"},
        {"azdle", "to become confused"},
        {"aherie", "a high nest"},
        {"whatever", "to append, attach"},
        {"agar", "a jelly made from seaweek"},
        {"dunno", "a nautical call of greeting"},
        {"aigrette", "an ornamental cluster of feathers"},
        {"trutka", "partially opened"}
    };

    printf ("\nDictionary as is:\n");
    for ( int i = 0; i < 10; i++)
        printf("%s: %s\n", dict[i].word, dict[i].definition);

    dictionarySort(dict, 10);

    printf ("\nDictionary sorted:\n");    
    for ( int i = 0; i < 10; i++)
        printf("%s: %s\n", dict[i].word, dict[i].definition);

    return 0;
}