// Program to sort an array of integers into ascending order
# include <stdio.h>
# include <stdbool.h>

void sort (int a[], int n, bool desc)
{
    int   i, j, temp;
    for ( i = 0; i < (n - 1); i++ )
        for ( j = (i + 1); j < n; j++ )
            if ( desc ) {
                if ( a[i] < a[j] ) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            } else { 
                if ( a[i] > a[j] ) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
}

int main(void)
{
    int   i;
    int   array1[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                        44, -3, -9, 12, 17, 22, 6, 11 };
    int   array2[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                        44, -3, -9, 12, 17, 22, 6, 11 };
    void sort (int a[], int n, bool desc);

    printf ("The array before the sort:\n");
    for ( i = 0; i < 16; i ++ )
        printf ("%i   ", array1[i]);

    sort (array1, 16, false);

    printf ("\n\nThe array after ascending sort:\n");
    for (i = 0; i < 16; i++)
        printf ("%i   ", array1[i]);

    sort (array2, 16, true);

    printf ("\n\nThe array after descebding sort:\n");
    for (i = 0; i < 16; i++)
        printf ("%i   ", array2[i]);
    printf ("\n");

    return 0;

}
