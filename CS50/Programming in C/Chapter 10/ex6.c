# include <stdio.h>
# include <stdbool.h>

struct entry 
{
    int value;
    struct entry *prev;
    struct entry *next;
};

void insertEntry(struct entry *to_insert, struct entry *target, bool before)
{
    if ( before )
    {
        to_insert->prev = target->prev;
        to_insert->next = target;
        target->prev = to_insert;
        to_insert->prev->next = to_insert;
    }
    else
    {
        to_insert->next = target->next;
        to_insert->prev = target;
        target->next = to_insert;
        to_insert->next->prev = to_insert;
    }
}

void removeEntry(struct entry *to_remove)
{
    struct entry *temp;
    temp = to_remove->prev;
    temp->next = to_remove->next;
    temp = to_remove->next;
    temp->prev = to_remove->prev;
    to_remove->prev = NULL;
    to_remove->next = NULL;
}

int main(void)
{
    struct entry n1, n2, n3, *ptr, ins;
    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n1.prev = NULL;
    n1.next = &n2;
    n2.prev = &n1;
    n2.next = &n3;
    n3.prev = &n2;
    n3.next = NULL;
    ins.value = 250;
    ins.next = NULL;
    ins.prev = NULL;

    ptr = &n1;

    printf ("printing list:\n");
    while ( ptr )
    {
        printf ("%i\n", ptr->value);
        ptr = ptr->next;
    }

    ptr = &n3;

    printf ("printing list in reverse:\n");

    while ( ptr )
    {
        printf ("%i\n", ptr->value);
        ptr = ptr->prev;
    }

    printf ("Inserting a new entry after n2.\n");
    insertEntry(&ins, &n2, false);

    ptr = &n1;

    printf ("printing list:\n");
    while ( ptr )
    {
        printf ("%i\n", ptr->value);
        ptr = ptr->next;
    }

    ptr = &n3;

    printf ("printing list in reverse:\n");

    while ( ptr )
    {
        printf ("%i\n", ptr->value);
        ptr = ptr->prev;
    }

    printf ("Removing inserted entry\n");
    removeEntry(&ins);

    ptr = &n1;

    printf ("printing list:\n");
    while ( ptr )
    {
        printf ("%i\n", ptr->value);
        ptr = ptr->next;
    }

    ptr = &n3;

    printf ("printing list in reverse:\n");

    while ( ptr )
    {
        printf ("%i\n", ptr->value);
        ptr = ptr->prev;
    }

    printf ("Inserting a new entry before n2.\n");
    insertEntry(&ins, &n2, true);

    ptr = &n1;

    printf ("printing list:\n");
    while ( ptr )
    {
        printf ("%i\n", ptr->value);
        ptr = ptr->next;
    }

    ptr = &n3;

    printf ("printing list in reverse:\n");

    while ( ptr )
    {
        printf ("%i\n", ptr->value);
        ptr = ptr->prev;
    }

    printf ("Removing inserted entry\n");
    removeEntry(&ins);

    ptr = &n1;

    printf ("printing list:\n");
    while ( ptr )
    {
        printf ("%i\n", ptr->value);
        ptr = ptr->next;
    }

    ptr = &n3;

    printf ("printing list in reverse:\n");

    while ( ptr )
    {
        printf ("%i\n", ptr->value);
        ptr = ptr->prev;
    }

}
