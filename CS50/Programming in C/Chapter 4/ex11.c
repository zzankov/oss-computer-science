// Program to calculate the sum of the digits of an integer
#include <stdio.h>

int main (int argc, char *argv[])
{
    int number, sum = 0;

    printf("Give me a positive integer: ");
    scanf ("%i", &number);

    for (; number > 0; sum += number % 10, number /= 10)
        ;
    printf ("The sum of the digits is %i\n", sum);

    return 0;
}