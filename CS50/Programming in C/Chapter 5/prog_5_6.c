// Program to implement the sign function

# include <stdio.h>

int main (int argc, char *argv[])
{
    int number, sign;

    printf ("Please type in a number: ");
    scanf ("%i", &number);

    if ( number < 0 )
        sign = -1;
    else if ( number == 0 )
        sign = 0;
    else
        sign = 1;

    printf ("Sign = %i\n", sign);

    return 0;
}