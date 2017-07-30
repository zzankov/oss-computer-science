#include <stdio.h>

struct entry 
{
    struct entry *prev;
    int value;
    struct entry *next;
};

int main (int argc, char *argv[])
{
    struct entry n1, n2, n3, *lPtr = &n1;

    n1.prev = NULL;
    n1.value = 100;
    n1.next = &n2;

    n2.prev = &n1;
    n2.value = 200;
    n2.next = &n3;

    n3.prev = &n2;
    n3.value = 300;
    n3.next = NULL;

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

    return 0;
}