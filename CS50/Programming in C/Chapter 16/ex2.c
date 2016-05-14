# include <stdio.h>
# include <string.h>
# include <stdlib.h>

struct entry 
{
    char *word;
    char *definition;
};

int main(int argc, char *argv[])
{
    const struct entry dictionary[100] = 
    { {"aardvark", "a burrowing African mammal" },
        {"abyss", "a bottomless pit" },
        {"acumen", "mentally sharp; keen" },
        {"addle", "to become confused" },
        {"aerie", "a high nest" },
        {"affix", "to append; attach"},
        {"agar", "a jelly made from seaweed"},
        {"ahoy", "a nautical call of greeting"},
        {"aigrette", "an ornamental cluster of feathers" },
        {"ajar", "partially open"}
    };

    int entries = 10;
    int entryNumber;
    int lookup (const struct entry dictionary[], const char search[],
            const int entries);

    if ( argc != 2)
    {
        fprintf(stderr, "Incorrect number of arguments passed\n");
        return EXIT_FAILURE;
    }
    entryNumber = lookup(dictionary, argv[1], entries);
    if ( entryNumber != -1 )
        printf ("%s\n", dictionary[entryNumber].definition);
    else
        printf ("Sorry, %s is not in my dictionary\n", argv[1]);

    return EXIT_SUCCESS;
}

int lookup (const struct entry dictionary[], const char search[], 
        const int entries)
{
    int i = 0, match;
    int high = entries, low = 0, mid = (high - low) / 2;

    while ((high - low) > 0)
    {
        mid = (high - low) / 2;
        match = strcmp(search, dictionary[mid].word);
        if ( match == 0 )
            break;

        switch (match) {
            case -1:
                high = mid;
                break;
            case 1:
                low = mid;
                break;
            default:
                ;
        };
        i++;
    }

    if (match == 0)
        return mid;
    else
        return -1;
}
