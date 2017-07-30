#include <stdio.h>

int main (int argc, char *argv[])
{
    struct entry
    {
        int value;
        struct entry *next;
    } n1, n2, n3;

    // pointer to the beginning of the list
    struct entry *listPtr = &n1;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = (struct entry *) 0;

    while (listPtr)
    {
        printf ("%i\n", listPtr->value);
        listPtr = listPtr->next;
    }

    return 0;

}