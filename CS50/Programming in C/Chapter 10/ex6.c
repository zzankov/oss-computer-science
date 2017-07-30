#include <stdio.h>

struct entry 
{
    struct entry *prev;
    int value;
    struct entry *next;
};

void insertEntry(struct entry *toInsert, struct entry *after)
{
    toInsert->next = after->next;
    toInsert->prev = after;
    after->next = toInsert;
    toInsert->next->prev = toInsert;
}

void removeEntry(struct entry *toRemove)
{
    toRemove->prev->next = toRemove->next;
    toRemove->next->prev = toRemove->prev;
    toRemove->prev = NULL;
    toRemove->next = NULL;
}

int main (int argc, char *argv[])
{
    void insertEntry(struct entry *toInsert, struct entry *after);
    void removeEntry(struct entry *toRemove);    
    struct entry n1, n2, n3, insert, *lPtr = &n1;

    n1.prev = NULL;
    n1.value = 100;
    n1.next = &n2;

    n2.prev = &n1;
    n2.value = 200;
    n2.next = &n3;

    n3.prev = &n2;
    n3.value = 300;
    n3.next = NULL;

    insert.value = 250;
    insert.prev = NULL;
    insert.next = NULL;

    printf ("Forward: \n");
    while (lPtr)
    {
        printf("%i\n", lPtr->value);
        lPtr = lPtr->next;
    }

    printf ("\nBackward: \n");
    lPtr = &n3;
    while (lPtr)
    {
        printf("%i\n", lPtr->value);
        lPtr = lPtr->prev;
    }

    printf("\n\nInserting  entry: \n");
    insertEntry(&insert, &n2);
    printf ("Forward: \n");
    lPtr = &n1;
    while (lPtr)
    {
        printf("%i\n", lPtr->value);
        lPtr = lPtr->next;
    }

    printf ("\nBackward: \n");
    lPtr = &n3;
    while (lPtr)
    {
        printf("%i\n", lPtr->value);
        lPtr = lPtr->prev;
    }

    printf("\n\nRemoving  entry: \n");
    removeEntry(&insert);
    printf ("Forward: \n");
    lPtr = &n1;
    while (lPtr)
    {
        printf("%i\n", lPtr->value);
        lPtr = lPtr->next;
    }

    printf ("\nBackward: \n");
    lPtr = &n3;
    while (lPtr)
    {
        printf("%i\n", lPtr->value);
        lPtr = lPtr->prev;
    }

    return 0;
}