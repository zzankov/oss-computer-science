#include <stdio.h>

int main (int argc, char *argv[])
{
    int value1, value2;

    printf ("Enter your two values: ");
    scanf ("%i %i", &value1, &value2);

    if (value2 == 0)
        printf ("Division by 0.\n");
    else
        printf ("%i / %i = %.3f\n", value1, value2, (float) value1 / value2 );

    return 0;
}