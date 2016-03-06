# include <stdio.h>

void sort (int *arr, int n)
{
    int *inside_loop;
    int *arr_end = arr + n;
    while (arr < (arr_end - 1))
    {
        inside_loop = arr + 1;
        while (inside_loop < arr_end) 
        {
            if ( *arr > *inside_loop ) {
                n = *arr;
                *arr = *inside_loop;
                *inside_loop = n;
            }
        inside_loop++;
        }
        arr++;
    }
}

int main(void)
{
    int i;
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
        44, -3, -9, 12, 17, 22, 6, 11};

    printf ("The array before the sort:\n");
    for ( i = 0; i < 16; i++ )
        printf ("%i\t", *(array + i));
    printf ("\n");

    sort(array, 16);

    printf ("The array after the sort:\n");
    for ( i = 0; i < 16; i++ )
       printf ("%i\t", *(array + i));
    printf ("\n");

    return 0;
}
