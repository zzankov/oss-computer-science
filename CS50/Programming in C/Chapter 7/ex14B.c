#include <stdio.h>

int gArray[10] = { 5, 1, 6, 12, 98, 
                        1, 3, 9, 123, 16};

int arraySum(int array[], int numElements) {
    int sum = 0;
    for (int i = 0; i < numElements; sum += array[i], ++i)
        ;
    return sum;
}

int main (int argc, char *argv[])
{
    int arraySum(int array[], int numElements);
    
    
    printf ("The sum of my array is %i\n", arraySum(gArray, 10));

    return 0;
}