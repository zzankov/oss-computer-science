// Program to reverse a number
#include <stdio.h>
#include <stdbool.h>

int main (int argc, char *argv[])
{
    int number;
    bool negative = false;

    printf ("Give me a number: ");
    scanf ("%i", &number);

    if (number < 0) {
        negative = true;
        number = -number;
    }

    do {
        printf ("%i", number % 10);
        number /= 10;
    } while (number != 0);

    if (negative)
        printf ("-");
    printf ("\n");

    return 0;

}