# include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void insertEntry(struct entry *to_insert, struct entry *after)
{
    (*to_insert).next = (*after).next;
    (*after).next = to_insert;
}

void removeEntry(struct entry *remove_after)
{
    struct entry *tmp;
    tmp = remove_after->next;
    remove_after->next = tmp->next;
    tmp->next = NULL;
}

int main (void)
{
    struct entry n1, n2, n3, n21;
    struct entry *lpr;
    lpr = &n1;
    n1.value = 100;
    n1.next = &n2;
    n2.value = 200;
    n2.next = &n3;
    n3.value = 300;
    n3.next = NULL;
    n21.value = 250;
    n21.next = NULL;

    while ( lpr )
    {
        printf ("%i\n", lpr->value);
        lpr = lpr->next;
    }

    printf ("\nInserting a new entry at the beginning of the list.\n");
    struct entry bgn = {0, &n1};
    insertEntry(&n21, &bgn);
    lpr = bgn.next;

    while ( lpr )
    {
        printf ("%i\n", lpr->value);
        lpr = lpr->next;
    }

    printf ("\nRemoving the entry at the beginning of the list.\n");
    removeEntry(&bgn);
    lpr = bgn.next;

    while ( lpr )
    {
        printf ("%i\n", lpr->value);
        lpr = lpr->next;
    }

    printf ("\nRemoving the second entry of the list.\n");
    removeEntry(&n1);
    lpr = bgn.next;

    while ( lpr )
    {
        printf ("%i\n", lpr->value);
        lpr = lpr->next;
    }

    return 0;
}
