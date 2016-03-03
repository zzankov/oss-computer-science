// Dictionary lookup program
# include <stdbool.h>
# include <stdio.h>

// declare a new structure
struct entry
{
    char    word[15];
    char    description[50];
};

// Function to compare two character strings
int compareStrings (const char s1[], const char s2[])
{
    int i = 0, answer;
    while ( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' )
        i++;
    if ( s1[i] < s2[i] )
        answer = -1;          /* s1 < s2 */
    else if ( s1[i] > s2[i] )
        answer = 1;           /* s1 == s2 */
    else
        answer = 0;           /* s1 > s2 */
    return answer;
}

// Function to look up a word inside a dictionary
int lookup (const struct entry dictionary[], const char search[],
        const int entries)
{
    int   low = 0;
    int   high = entries - 1;
    int   mid, result;

    // prototyping
    int   compareStrings (const char s1[], const char s2[]);

    while (low <= high) {
        mid = (low + high) / 2;
        result = compareStrings (dictionary[mid].word, search);
        if ( result == -1 )
            low = mid + 1;
        else if (result == 1)
            high = mid - 1;
        else
            return mid;   /* found the word */
    }
    return -1;            /* not found */
}

void dictionarySort(struct entry dict[], int entries)
{
    struct entry temp;
    bool swapped;

    do
    {
        swapped = false;

        for ( int i = 0; i < entries - 1; i++ )
        {
            if ( compareStrings(dict[i].word, dict[i+1].word) == 1 )
            {
                temp = dict[i];
                dict[i] = dict[i+1];
                dict[i+1] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}

int main(void)
{
    int i = 0;
    int entries = 18;
    struct entry dictionary[100] =
    {   { "aardvark",   "a burrowing African mammal"                  },
        { "abyss",      "a bottomless pit"                            },
        { "acumen",     "menatally sharp; keen"                       },
        { "addle",      "to become confused"                          },
        { "aerie",      "a high nest"                                 },
        { "bubence",    "best thing that ever happened to you"        },
        { "xiao-mi",    "some fake-shit chinese phone brand"           },
        { "kifla",      "a bulgarian breakfastl; also skank"          },
        { "pederast",   "a derogatory term for a homosexual"          },
        { "shitstir",   "a person who likes to stir shit"             }, 
        { "hedgehog",   "an adorable animal covered in needles"       },
        { "laina",      "don't even ask! I would rather not answer"   },
        { "pichka",     "ovo je nogu strasno nesto"                   },
        { "affix",      "to append; attach"                           },
        { "agar",       "a jelly made from seaweed"                   },
        { "ahoy",       "a nautical call of greeting"                 },
        { "aigrette",   "an ornamental cluster of feathers"           },
        { "ajar",       "partially opened"                            },
    };

    printf ("Before the sort the words in the dictionary are:\n");
    for ( i = 0; i < entries; i++ )
        printf ("%s\n", dictionary[i].word);

    dictionarySort(dictionary, entries);
    printf ("\nAfter the sort the words in the dictionary are:\n");
    for ( i = 0; i < entries; i++ )
        printf ("%s\n", dictionary[i].word);

    return 0;
}
