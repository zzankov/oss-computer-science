# include <stdio.h>
# include <stdlib.h>
# include <time.h>

// prototyping
unsigned long long int arraySum(int num_elements, int array[]);

// variables
unsigned long long int  result = 0;
int a[10];

int main (void)
{
    // set seed to be random at each run
    srand(time(NULL));

    // assign a random number to each of the elements of "a"
    for ( int i = 0; i < 10; i++ )
        a[i] = rand() % 100 + 1;
    
    // print the sum of the elements in a
    printf ("The sum of the elements of the array is %llu\n",
            arraySum(10, a));

    // end program with 0 exit to indicate no errors
    return 0;
}

unsigned long long int arraySum(int num_elements, int array[])
{
    // loop through the elements and add them to the variable "result"
    for ( int i = 0; i < num_elements; i++ )
        result += array[i];
    return result;
}
