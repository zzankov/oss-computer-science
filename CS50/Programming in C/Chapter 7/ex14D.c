// Program to sort an array of integers into ascending order
# include <stdio.h>
# include <stdbool.h>

// prototyping
void sort (int a[], int n, bool desc);

// variables
int   i, j, temp;
int   array1[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
    44, -3, -9, 12, 17, 22, 6, 11 };
int   array2[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
    44, -3, -9, 12, 17, 22, 6, 11 };

// function to sort an array in a specified order
void sort (int a[], int n, bool desc)
{
    for ( i = 0; i < (n - 1); i++ )
        for ( j = (i + 1); j < n; j++ )

            // run a specific check or sort depending on the value of "desc"
            if ( desc ) {
                if ( a[i] < a[j] ) {
                    temp = a[i]; // temporarily assign the a[i] to a variable
                    a[i] = a[j]; // put the value of a[j] into a[i] 
                    a[j] = temp; // put the value of temp (a[i]) into a[j]
                }
            } else { 
                if ( a[i] > a[j] ) {
                    temp = a[i]; // temporarily assign the a[i] to a variable
                    a[i] = a[j]; // put the value of a[j] into a[i] 
                    a[j] = temp; // put the value of temp (a[i]) into a[j]
                }
            }
}

// main function
int main(void)
{
    // print the global array once
    printf ("The array before the sort:\n");
    for ( i = 0; i < 16; i ++ )
        printf ("%i   ", array1[i]);

    // sort the array in an ascending order and print it
    sort (array1, 16, false);
    printf ("\n\nThe array after ascending sort:\n");
    for (i = 0; i < 16; i++)
        printf ("%i   ", array1[i]);

    // sort the array in a descending order and print it
    sort (array2, 16, true);
    printf ("\n\nThe array after descebding sort:\n");
    for (i = 0; i < 16; i++)
        printf ("%i   ", array2[i]);
    printf ("\n");

    // end program with 0 exit to indicate to errors
    return 0;
}
