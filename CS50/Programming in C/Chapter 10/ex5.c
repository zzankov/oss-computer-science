# include <stdio.h>
struct entry
{
    int value;
    struct entry *prev;
    struct entry *next;
};

int main(void)
{
    struct entry n1, n2, n3, *ptr;
    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n1.prev = NULL;
    n1.next = &n2;
    n2.prev = &n1;
    n2.next = &n3;
    n3.prev = &n2;
    n3.next = NULL;

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
