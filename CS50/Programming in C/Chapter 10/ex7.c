// Program to sort an array of integers into ascending order
#include <stdio.h>

void sort(int *a, int n) {
    int *aEnd = a + n;
    int temp;
    int *b;

    while (a < aEnd - 1)
    {
        b = a + 1;
        while (b < aEnd)
        {
            if (*a > *b)
            {
                temp = *a;
                *a = *b;
                *b = temp;
            }
            b++;
        }
        a++;
    }
}

int main (int argc, char *argv[])
{
    int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                    44, -3, -9, 12, 17, 22, 6, 11};

    void sort(int *a, int n);

    printf ("The array before the sort:\n");

    for ( int i = 0; i < 16; i++ )
        printf ("%i ", array[i]);

    printf("\n\nThe array after the sort:\n");
    sort(array, 16);

    for ( int i = 0; i < 16; i++ )
        printf ("%i ", array[i]);

    printf ("\n");

    return 0;
}