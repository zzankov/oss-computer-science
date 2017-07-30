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
    struct entry n1, n2, n3, insert, *lPtr = &n1;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = NULL;
    
    insert.value = 250;
    insert.next = NULL;

    printf("Original list: \n");
    while (lPtr) {
        printf("%i\n", lPtr->value);
        lPtr = lPtr->next;
    }

    printf("\nInserting entry: \n");    
    insertEntry(&insert, &n2);
    lPtr = &n1;

    while (lPtr) {
        printf("%i\n", lPtr->value);
        lPtr = lPtr->next;
    }

    return 0;
}