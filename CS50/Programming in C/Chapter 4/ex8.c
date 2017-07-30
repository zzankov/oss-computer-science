#include <stdio.h>

int main (int argc, char *argv[])
{
    int times, number;
    printf ("How many triangular numbers would you like to calculate? ");
    scanf ("%i", &times);

    for (int i = 0; i < times; ++i) {
        printf("Give me a number: ");
        scanf("%i", &number);
        printf("Triangular of %i is %i\n", number, 
            number * (number + 1) / 2);
    }

    return 0;
}