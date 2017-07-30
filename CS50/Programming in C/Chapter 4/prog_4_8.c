// Program to reverse the digits of a number

# include <stdio.h>

int main (int argc, char *argv[])
{
    int number, right_digit;

    printf ("Enter your number: ");

    scanf ("%i", &number);

    while (number != 0 ) {
        printf("%i", number % 10);
        number /= 10;
    }

    printf("\n");

    return 0;
}