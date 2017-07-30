// Program to sort an array of integers into ascending order
#include <stdio.h>

int gArray[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                    44, -3, -9, 12, 17, 22, 6, 11};

void sort(int a[], int n, _Bool desc) {
    int temp;

    for ( int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) 
            if ( desc ? a[i] < a[j] : a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int main (int argc, char *argv[])
{
    void sort (int a[], int n, _Bool desc);

    printf ("The array before the sort:\n");

    for ( int i = 0; i < 16; i++ )
        printf ("%i ", gArray[i]);

    sort(gArray, 16, 0);

    printf("\n\nThe array after the ascending sort:\n");

    for ( int i = 0; i < 16; i++ )
        printf ("%i ", gArray[i]);

    sort(gArray, 16, 1);

    printf("\n\nThe array after the descending sort:\n");

    for ( int i = 0; i < 16; i++ )
        printf ("%i ", gArray[i]);

    printf ("\n");

    return 0;
}