// Program to convert a positive integer to another base
#include <stdio.h>

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;

void getNumberAndBase(void) {
    printf ("Number to be converted? ");
    scanf ("%li", &numberToConvert);

    do {
        printf ("Base? (must be an integer between 2 and 16) ");
        scanf ("%i", &base);
        
    } while (base < 2 || base > 16);
}

void convertNumber(void) {
    do {
        convertedNumber[digit] = numberToConvert % base;
        ++digit;
        numberToConvert /= base;
    } while (numberToConvert != 0);
}

void displayConvertedNumber (void) {
    const char baseDigits[16] = 
        {'0', '1', '2', '3', '4', '5', '6', '7',
         '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    printf ("Converted number = ");

    for (--digit; digit >= 0; --digit) 
        printf ("%c", baseDigits[convertedNumber[digit]]);
    
    digit = 0;
    printf ("\n");
}

int main (int argc, char *argv[])
{
    void getNumberAndBase(void);
    void convertNumber(void);
    void displayConvertedNumber(void);
    int times;

    printf ("How many numbers do you want to convert? ");
    scanf ("%i", &times);

    for ( int i = 0; i < times; ++i) {
        getNumberAndBase();
        convertNumber();
        displayConvertedNumber();
    }
    
    return 0;
}