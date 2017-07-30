// Program to reverse the digits of a number

#include <stdio.h>

int main (int argc, char *argv[])
{
    int number;

    printf ("Enter your number: ");
    scanf ("%i", &number);

    do {
        printf ("%i", number % 10);
        number /= 10;
    } while (number != 0);

    printf ("\n");

    return 0;
}