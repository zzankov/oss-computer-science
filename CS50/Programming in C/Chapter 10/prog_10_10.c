# include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

struct entry *findEntry (struct entry   *listPtr, int match)
{
    while ( listPtr != (struct entry *) 0 )
        if ( listPtr-> value == match )
            return listPtr;
        else
            listPtr = listPtr->next;
    return (struct entry *) 0;
}

int main(void)
{
    // declare functions and variables
    struct entry *findEntry (struct entry *listPtr, int match);
    struct entry n1, n2, n3, *listPtr;
    int search;

    // initialize lists
    n1.value = 100;
    n1.next = &n2;
    n2.value = 200;
    n2.next = &n3;
    n3.value = 300;
    n3.next = (struct entry *) 0;

    // get user input for the search variable
    printf ("Enter value to locate: ");
    scanf ("%i", &search);
    listPtr = findEntry(&n1, search); // search for value

    // print results
    if ( listPtr != (struct entry *) 0 )
        printf ("Found %i.\n", listPtr->value);
    else
        printf ("Not found.\n");
    return 0;
}
