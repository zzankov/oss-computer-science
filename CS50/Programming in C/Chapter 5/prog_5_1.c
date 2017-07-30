// Program to calculate the absolute value of an integer
#include <stdio.h>

int main (int argc, char *argv[])
{
    int number;

    printf("Type in a number: ");
    scanf("%i", &number);

    if (number < 0)
        number = -number;
    
    printf("The absolute value is %i\n", number);

    return 0;
}