#include <stdio.h>

struct entry 
{
    int value;
    struct entry *next;
};

void removeEntry( struct entry *listPtr )
{
    struct entry *ptr = listPtr->next;
    listPtr->next = ptr->next;
    ptr->next = NULL;
}

int main (int argc, char *argv[])
{
    void removeEntry(struct entry *listPtr);
    struct entry n1, n2, n3, start, *lPtr;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = NULL;

    start.next = &n1;

    lPtr = start.next;
    printf("Original list: \n");
    while (lPtr) {
        printf("%i\n", lPtr->value);
        lPtr = lPtr->next;
    }

    printf("\nInserting entry: \n");    
    removeEntry(&start);
    lPtr = start.next;

    while (lPtr) {
        printf("%i\n", lPtr->value);
        lPtr = lPtr->next;
    }

    return 0;
}