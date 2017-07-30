// Program to convert a positive integer to another base

#include <stdio.h>

int main (int argc, char *argv[])
{
    const char baseDigits[16] = {'0', '1', '2', '3', '4', 
        '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;

    // get number and base

    printf ("Number to be converted? ");
    scanf ("%li", &numberToConvert);
    printf ("Base? ");
    scanf ("%i", &base);

    // convert to indicated base

    do {
        convertedNumber[index] = numberToConvert % base;
        numberToConvert /= base;
        ++index;
    } while (numberToConvert != 0);

    // display the results in reverse order

    printf ("Conveted number = ");
    
    for (--index; index >= 0; --index)
        printf("%c", baseDigits[convertedNumber[index]]);
    
    printf ("\n");

    return 0;
}