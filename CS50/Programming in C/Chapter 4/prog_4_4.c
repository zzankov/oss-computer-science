#include <stdio.h>

int main (int argc, char *argv[])
{
    int number, triangularNumber = 0;

    printf("What triangular number do you want? ");
    scanf("%i", &number);

    for(int n = 1; n <= number; triangularNumber += n, n++)
        ;

    printf("Triangular number %i is %i\n", number, triangularNumber);

    return 0;
}