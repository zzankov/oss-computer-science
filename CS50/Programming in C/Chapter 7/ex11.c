# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main (void)
{
    int   a[10]; 
    unsigned long long int arraySum(int num_elements, int array[]);

    srand(time(NULL));

    for ( int i = 0; i < 10; i++ )
        a[i] = rand() % 10 + 1;

    printf ("The sum of the elements of the array is %llu\n",
            arraySum(10, a));

    return 0;
}

unsigned long long int arraySum(int num_elements, int array[])
{
    unsigned long long int  result = 0;
    for ( int i = 0; i < num_elements; i++ )
        result += array[i];
    return result;
}
