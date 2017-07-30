#include <stdio.h>

int main (int argc, char *argv[])
{
    int n, number, triangularNumber;

    for(int counter = 1; counter <= 5; ++counter) {
        printf ("What triangular number do you want? ");
        scanf("%i", &number);

        triangularNumber = 0;
        
        for (int n = 1; n <= number; triangularNumber += n, n++)
            ;
        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}