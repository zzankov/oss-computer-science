#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

struct entry *findEntry (struct entry *listPtr, int match)
{
    while (listPtr != NULL)
        if (listPtr->value == match)
            return listPtr;
        else
            listPtr = listPtr->next;

    return NULL;
}

int main (int argc, char *argv[])
{
    struct entry *findEntry (struct entry *listPtr, int match);
    struct entry n1, n2, n3, *lPtr, *lPtrStart = &n1;
    
    int search;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = NULL;

    printf("Enter value to locate: ");
    scanf ("%i", &search);

    lPtr = findEntry(lPtrStart, search);

    if (lPtr)
        printf ("Found %i.\n", lPtr->value);
    else
        printf ("Not found.\n");

    return 0;
}