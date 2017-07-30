// Function to find the minimum value in an array
#include <stdio.h>

int minimum (int values[], int numElements) {
    int minValue;

    minValue = values[0];

    for ( int i = 1; i < numElements; i++ )
        if (values[i] < minValue)
            minValue = values[i];

    return minValue;
}

int main (int argc, char *argv[])
{
    int minimum(int values[], int numElements);
    int array1[5] = {157, -28, -37, 26, 10};
    int array2[7] = {12, 45, 1, 10, 5, 3, 22};

    printf ("Array1 minimum: %i\n", minimum(array1, 5));
    printf ("Array2 minimum: %i\n", minimum(array2, 7));

    return 0;
}