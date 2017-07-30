#include <stdio.h>

struct entry 
{
    int value;
    struct entry *next;
};

void insertEntry(struct entry *toInsert, struct entry *after)
{
    toInsert->next = after->next;
    after->next = toInsert;
}

int main (int argc, char *argv[])
{
    void insertEntry(struct entry *toInsert, struct entry *after);
    struct entry n1, n2, n3, insert, start, *lPtr;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = NULL;
    
    insert.value = 250;
    insert.next = NULL;

    start.next = &n1;

    lPtr = start.next;
    printf("Original list: \n");
    while (lPtr) {
        printf("%i\n", lPtr->value);
        lPtr = lPtr->next;
    }

    printf("\nInserting entry: \n");    
    insertEntry(&insert, &start);
    lPtr = start.next;

    while (lPtr) {
        printf("%i\n", lPtr->value);
        lPtr = lPtr->next;
    }

    return 0;
}