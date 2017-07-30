# include <stdio.h>

int main (int argc, char *argv[])
{
    int value1, value2;

    printf ("Enter your two values: ");
    scanf ("%i %i", &value1, &value2);

    if ( value1 % value2 == 0)
        printf ("Awesome!\n");
    else
        printf ("Meh...\n");

    return 0;
}